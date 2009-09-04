#include "qibusenginefactory.h"
#include "qibusfactoryadaptor.h"

namespace IBus {

EngineFactory *EngineFactory::m_factory = NULL;

EngineFactory::EngineFactory (const QDBusConnection &conn, uint id)
    : m_conn (conn)
{
    m_id = id;
    m_factoryAdaptor = new IBusFactoryAdaptor (this);
}

EngineFactory::~EngineFactory ()
{
    if ( m_factoryAdaptor != NULL ) {
        delete m_factoryAdaptor;
        m_factoryAdaptor = NULL;
    }

    if ( m_factory != NULL ) {
	delete m_factory;
	m_factory = NULL;
    }
}

EngineFactory *EngineFactory::getEngineFactory (const QDBusConnection &conn)
{
    if ( m_factory == NULL ) {
	m_factory = new EngineFactory(conn);
    }

    return m_factory;
}

QDBusObjectPath
EngineFactory::CreateEngine (const QString &engineName)
{
    QString path = "/org/freedesktop/IBus/Engine/" + engineName + "/" + QString::number(++m_id);

    qDebug () << "CreateEngine";
    qDebug () << path;

    if ( !m_engineMap.contains(engineName) ) {
        qDebug () << "EngineFactory::CreateEngine, can not create engine!";
        return QDBusObjectPath();
    }

    const QMetaObject *mo = m_engineMap[engineName];
    if ( !mo ) {
        qDebug () << "EngineFactory::CreateEngine, QMetaObject pointer in map is null!";
        return QDBusObjectPath();
    }

    Engine *obj = qobject_cast<Engine *>(mo->newInstance (Q_ARG(QString, engineName)));
    if ( !obj ) {
        qDebug () << "EngineFactory::CreateEngine, newInstance error!";
        return QDBusObjectPath();
    }

    IBusEngineAdaptor *engineAdaptor = new IBusEngineAdaptor (obj);
    if ( !engineAdaptor ) {
        qDebug () << "EngineFactory::CreateEngine, new error!";
        return QDBusObjectPath();
    }

    if ( !m_conn.registerObject (path, engineAdaptor) ) {
        qDebug () << "EngineFactory::CreateEngine, registerObject error!";
        return QDBusObjectPath();
    }

    m_engineLList.append(engineAdaptor);

    return QDBusObjectPath(path);
}

void
EngineFactory::Destroy ()
{
    /*
    QLinkedList<IBusEngineAdaptor *>::const_iterator lli = m_engineLList.begin();
    for ( ; lli != m_engineLList.end(); ++lli ) {
        if ( *lli ==  engineAdaptor ) {
            delete engineAdaptor;
            m_engineLList.removeOne(engineAdaptor);

            return;
        }
    }
    */

    return;
}

void
EngineFactory::addMetaObject(const QString &name, const QMetaObject *metaObject)
{
    Q_ASSERT(metaObject);

    m_engineMap[name] = metaObject;
}

};