/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -a qibuspaneladaptor -c IBusPanelAdaptor -v org.freedesktop.IBus.Panel.xml org.freedesktop.IBus.Panel
 *
 * qdbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "qibuspaneladaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class IBusPanelAdaptor
 */

IBusPanelAdaptor::IBusPanelAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

IBusPanelAdaptor::~IBusPanelAdaptor()
{
    // destructor
}

void IBusPanelAdaptor::CursorDownLookupTable()
{
    // handle method call org.freedesktop.IBus.Panel.CursorDownLookupTable
    QMetaObject::invokeMethod(parent(), "CursorDownLookupTable");
}

void IBusPanelAdaptor::CursorUpLookupTable()
{
    // handle method call org.freedesktop.IBus.Panel.CursorUpLookupTable
    QMetaObject::invokeMethod(parent(), "CursorUpLookupTable");
}

void IBusPanelAdaptor::Destroy()
{
    // handle method call org.freedesktop.IBus.Panel.Destroy
    QMetaObject::invokeMethod(parent(), "Destroy");
}

void IBusPanelAdaptor::FocusIn(const QDBusObjectPath &ic)
{
    // handle method call org.freedesktop.IBus.Panel.FocusIn
    QMetaObject::invokeMethod(parent(), "FocusIn", Q_ARG(QDBusObjectPath, ic));
}

void IBusPanelAdaptor::FocusOut(const QDBusObjectPath &ic)
{
    // handle method call org.freedesktop.IBus.Panel.FocusOut
    QMetaObject::invokeMethod(parent(), "FocusOut", Q_ARG(QDBusObjectPath, ic));
}

void IBusPanelAdaptor::HideAuxiliaryText()
{
    // handle method call org.freedesktop.IBus.Panel.HideAuxiliaryText
    QMetaObject::invokeMethod(parent(), "HideAuxiliaryText");
}

void IBusPanelAdaptor::HideLanguageBar()
{
    // handle method call org.freedesktop.IBus.Panel.HideLanguageBar
    QMetaObject::invokeMethod(parent(), "HideLanguageBar");
}

void IBusPanelAdaptor::HideLookupTable()
{
    // handle method call org.freedesktop.IBus.Panel.HideLookupTable
    QMetaObject::invokeMethod(parent(), "HideLookupTable");
}

void IBusPanelAdaptor::HidePreeditText()
{
    // handle method call org.freedesktop.IBus.Panel.HidePreeditText
    QMetaObject::invokeMethod(parent(), "HidePreeditText");
}

void IBusPanelAdaptor::PageDownLookupTable()
{
    // handle method call org.freedesktop.IBus.Panel.PageDownLookupTable
    QMetaObject::invokeMethod(parent(), "PageDownLookupTable");
}

void IBusPanelAdaptor::PageUpLookupTable()
{
    // handle method call org.freedesktop.IBus.Panel.PageUpLookupTable
    QMetaObject::invokeMethod(parent(), "PageUpLookupTable");
}

void IBusPanelAdaptor::RegisterProperties(const QDBusVariant &props)
{
    // handle method call org.freedesktop.IBus.Panel.RegisterProperties
    QMetaObject::invokeMethod(parent(), "RegisterProperties", Q_ARG(QDBusVariant, props));
}

void IBusPanelAdaptor::Reset()
{
    // handle method call org.freedesktop.IBus.Panel.Reset
    QMetaObject::invokeMethod(parent(), "Reset");
}

void IBusPanelAdaptor::SetCursorLocation(int x, int y, int w, int h)
{
    // handle method call org.freedesktop.IBus.Panel.SetCursorLocation
    QMetaObject::invokeMethod(parent(), "SetCursorLocation", Q_ARG(int, x), Q_ARG(int, y), Q_ARG(int, w), Q_ARG(int, h));
}

void IBusPanelAdaptor::ShowAuxiliaryText()
{
    // handle method call org.freedesktop.IBus.Panel.ShowAuxiliaryText
    QMetaObject::invokeMethod(parent(), "ShowAuxiliaryText");
}

void IBusPanelAdaptor::ShowLanguageBar()
{
    // handle method call org.freedesktop.IBus.Panel.ShowLanguageBar
    QMetaObject::invokeMethod(parent(), "ShowLanguageBar");
}

void IBusPanelAdaptor::ShowLookupTable()
{
    // handle method call org.freedesktop.IBus.Panel.ShowLookupTable
    QMetaObject::invokeMethod(parent(), "ShowLookupTable");
}

void IBusPanelAdaptor::ShowPreeditText()
{
    // handle method call org.freedesktop.IBus.Panel.ShowPreeditText
    QMetaObject::invokeMethod(parent(), "ShowPreeditText");
}

void IBusPanelAdaptor::StartSetup()
{
    // handle method call org.freedesktop.IBus.Panel.StartSetup
    QMetaObject::invokeMethod(parent(), "StartSetup");
}

void IBusPanelAdaptor::StateChanged()
{
    // handle method call org.freedesktop.IBus.Panel.StateChanged
    QMetaObject::invokeMethod(parent(), "StateChanged");
}

void IBusPanelAdaptor::UpdateAuxiliaryText(const QDBusVariant &text, bool visible)
{
    // handle method call org.freedesktop.IBus.Panel.UpdateAuxiliaryText
    QMetaObject::invokeMethod(parent(), "UpdateAuxiliaryText", Q_ARG(QDBusVariant, text), Q_ARG(bool, visible));
}

void IBusPanelAdaptor::UpdateLookupTable(const QDBusVariant &lookup_table, bool visible)
{
    // handle method call org.freedesktop.IBus.Panel.UpdateLookupTable
    QMetaObject::invokeMethod(parent(), "UpdateLookupTable", Q_ARG(QDBusVariant, lookup_table), Q_ARG(bool, visible));
}

void IBusPanelAdaptor::UpdatePreeditText(const QDBusVariant &text, uint cursor_pos, bool visible)
{
    // handle method call org.freedesktop.IBus.Panel.UpdatePreeditText
    QMetaObject::invokeMethod(parent(), "UpdatePreeditText", Q_ARG(QDBusVariant, text), Q_ARG(uint, cursor_pos), Q_ARG(bool, visible));
}

void IBusPanelAdaptor::UpdateProperty(const QDBusVariant &prop)
{
    // handle method call org.freedesktop.IBus.Panel.UpdateProperty
    QMetaObject::invokeMethod(parent(), "UpdateProperty", Q_ARG(QDBusVariant, prop));
}

