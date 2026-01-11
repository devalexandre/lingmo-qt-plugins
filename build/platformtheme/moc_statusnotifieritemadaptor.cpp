/****************************************************************************
** Meta object code from reading C++ file 'statusnotifieritemadaptor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "statusnotifieritemadaptor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statusnotifieritemadaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN25StatusNotifierItemAdaptorE_t {};
} // unnamed namespace

template <> constexpr inline auto StatusNotifierItemAdaptor::qt_create_metaobjectdata<qt_meta_tag_ZN25StatusNotifierItemAdaptorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "StatusNotifierItemAdaptor",
        "D-Bus Interface",
        "org.kde.StatusNotifierItem",
        "D-Bus Introspection",
        "  <interface name=\"org.kde.StatusNotifierItem\">\n    <property a"
        "ccess=\"read\" type=\"s\" name=\"Category\"/>\n    <property acces"
        "s=\"read\" type=\"s\" name=\"Id\"/>\n    <property access=\"read\""
        " type=\"s\" name=\"Title\"/>\n    <property access=\"read\" type=\""
        "s\" name=\"Status\"/>\n    <property access=\"read\" type=\"i\" na"
        "me=\"WindowId\"/>\n    <property access=\"read\" type=\"s\" name=\""
        "IconThemePath\"/>\n    <property access=\"read\" type=\"o\" name=\""
        "Menu\"/>\n    <property access=\"read\" type=\"b\" name=\"ItemIsMe"
        "nu\"/>\n    <property access=\"read\" type=\"s\" name=\"IconName\""
        "/>\n    <property access=\"read\" type=\"a(iiay)\" name=\"IconPixm"
        "ap\">\n      <annotation value=\"IconPixmapList\" name=\"org.qtpro"
        "ject.QtDBus.QtTypeName\"/>\n    </property>\n    <property access="
        "\"read\" type=\"s\" name=\"OverlayIconName\"/>\n    <property acce"
        "ss=\"read\" type=\"a(iiay)\" name=\"OverlayIconPixmap\">\n      <a"
        "nnotation value=\"IconPixmapList\" name=\"org.qtproject.QtDBus.QtT"
        "ypeName\"/>\n    </property>\n    <property access=\"read\" type=\""
        "s\" name=\"AttentionIconName\"/>\n    <property access=\"read\" ty"
        "pe=\"a(iiay)\" name=\"AttentionIconPixmap\">\n      <annotation va"
        "lue=\"IconPixmapList\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
        "    </property>\n    <property access=\"read\" type=\"s\" name=\"A"
        "ttentionMovieName\"/>\n    <property access=\"read\" type=\"(sa(ii"
        "ay)ss)\" name=\"ToolTip\">\n      <annotation value=\"ToolTip\" na"
        "me=\"org.qtproject.QtDBus.QtTypeName\"/>\n    </property>\n    <me"
        "thod name=\"ContextMenu\">\n      <arg direction=\"in\" type=\"i\""
        " name=\"x\"/>\n      <arg direction=\"in\" type=\"i\" name=\"y\"/>"
        "\n    </method>\n    <method name=\"Activate\">\n      <arg direct"
        "ion=\"in\" type=\"i\" name=\"x\"/>\n      <arg direction=\"in\" ty"
        "pe=\"i\" name=\"y\"/>\n    </method>\n    <method name=\"Secondary"
        "Activate\">\n      <arg direction=\"in\" type=\"i\" name=\"x\"/>\n"
        "      <arg direction=\"in\" type=\"i\" name=\"y\"/>\n    </method>"
        "\n    <method name=\"Scroll\">\n      <arg direction=\"in\" type=\""
        "i\" name=\"delta\"/>\n      <arg direction=\"in\" type=\"s\" name="
        "\"orientation\"/>\n    </method>\n    <signal name=\"NewTitle\"/>\n"
        "    <signal name=\"NewIcon\"/>\n    <signal name=\"NewAttentionIco"
        "n\"/>\n    <signal name=\"NewOverlayIcon\"/>\n    <signal name=\"N"
        "ewToolTip\"/>\n    <signal name=\"NewStatus\">\n      <arg type=\""
        "s\" name=\"status\"/>\n    </signal>\n  </interface>\n",
        "NewAttentionIcon",
        "",
        "NewIcon",
        "NewOverlayIcon",
        "NewStatus",
        "status",
        "NewTitle",
        "NewToolTip",
        "Activate",
        "x",
        "y",
        "ContextMenu",
        "Scroll",
        "delta",
        "orientation",
        "SecondaryActivate",
        "AttentionIconName",
        "AttentionIconPixmap",
        "IconPixmapList",
        "AttentionMovieName",
        "Category",
        "IconName",
        "IconPixmap",
        "IconThemePath",
        "Id",
        "ItemIsMenu",
        "Menu",
        "QDBusObjectPath",
        "OverlayIconName",
        "OverlayIconPixmap",
        "Status",
        "Title",
        "ToolTip",
        "WindowId"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'NewAttentionIcon'
        QtMocHelpers::SignalData<void()>(5, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'NewIcon'
        QtMocHelpers::SignalData<void()>(7, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'NewOverlayIcon'
        QtMocHelpers::SignalData<void()>(8, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'NewStatus'
        QtMocHelpers::SignalData<void(const QString &)>(9, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Signal 'NewTitle'
        QtMocHelpers::SignalData<void()>(11, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'NewToolTip'
        QtMocHelpers::SignalData<void()>(12, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Activate'
        QtMocHelpers::SlotData<void(int, int)>(13, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 14 }, { QMetaType::Int, 15 },
        }}),
        // Slot 'ContextMenu'
        QtMocHelpers::SlotData<void(int, int)>(16, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 14 }, { QMetaType::Int, 15 },
        }}),
        // Slot 'Scroll'
        QtMocHelpers::SlotData<void(int, const QString &)>(17, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 18 }, { QMetaType::QString, 19 },
        }}),
        // Slot 'SecondaryActivate'
        QtMocHelpers::SlotData<void(int, int)>(20, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 14 }, { QMetaType::Int, 15 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'AttentionIconName'
        QtMocHelpers::PropertyData<QString>(21, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'AttentionIconPixmap'
        QtMocHelpers::PropertyData<IconPixmapList>(22, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'AttentionMovieName'
        QtMocHelpers::PropertyData<QString>(24, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'Category'
        QtMocHelpers::PropertyData<QString>(25, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'IconName'
        QtMocHelpers::PropertyData<QString>(26, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'IconPixmap'
        QtMocHelpers::PropertyData<IconPixmapList>(27, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'IconThemePath'
        QtMocHelpers::PropertyData<QString>(28, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'Id'
        QtMocHelpers::PropertyData<QString>(29, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'ItemIsMenu'
        QtMocHelpers::PropertyData<bool>(30, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'Menu'
        QtMocHelpers::PropertyData<QDBusObjectPath>(31, 0x80000000 | 32, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'OverlayIconName'
        QtMocHelpers::PropertyData<QString>(33, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'OverlayIconPixmap'
        QtMocHelpers::PropertyData<IconPixmapList>(34, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'Status'
        QtMocHelpers::PropertyData<QString>(35, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'Title'
        QtMocHelpers::PropertyData<QString>(36, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'ToolTip'
        QtMocHelpers::PropertyData<ToolTip>(37, 0x80000000 | 37, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'WindowId'
        QtMocHelpers::PropertyData<int>(38, QMetaType::Int, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<StatusNotifierItemAdaptor, qt_meta_tag_ZN25StatusNotifierItemAdaptorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject StatusNotifierItemAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25StatusNotifierItemAdaptorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25StatusNotifierItemAdaptorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN25StatusNotifierItemAdaptorE_t>.metaTypes,
    nullptr
} };

void StatusNotifierItemAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<StatusNotifierItemAdaptor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->NewAttentionIcon(); break;
        case 1: _t->NewIcon(); break;
        case 2: _t->NewOverlayIcon(); break;
        case 3: _t->NewStatus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->NewTitle(); break;
        case 5: _t->NewToolTip(); break;
        case 6: _t->Activate((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->ContextMenu((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 8: _t->Scroll((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->SecondaryActivate((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (StatusNotifierItemAdaptor::*)()>(_a, &StatusNotifierItemAdaptor::NewAttentionIcon, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (StatusNotifierItemAdaptor::*)()>(_a, &StatusNotifierItemAdaptor::NewIcon, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (StatusNotifierItemAdaptor::*)()>(_a, &StatusNotifierItemAdaptor::NewOverlayIcon, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (StatusNotifierItemAdaptor::*)(const QString & )>(_a, &StatusNotifierItemAdaptor::NewStatus, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (StatusNotifierItemAdaptor::*)()>(_a, &StatusNotifierItemAdaptor::NewTitle, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (StatusNotifierItemAdaptor::*)()>(_a, &StatusNotifierItemAdaptor::NewToolTip, 5))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
        case 5:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< IconPixmapList >(); break;
        case 14:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ToolTip >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->attentionIconName(); break;
        case 1: *reinterpret_cast<IconPixmapList*>(_v) = _t->attentionIconPixmap(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->attentionMovieName(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->category(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->iconName(); break;
        case 5: *reinterpret_cast<IconPixmapList*>(_v) = _t->iconPixmap(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->iconThemePath(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->id(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->itemIsMenu(); break;
        case 9: *reinterpret_cast<QDBusObjectPath*>(_v) = _t->menu(); break;
        case 10: *reinterpret_cast<QString*>(_v) = _t->overlayIconName(); break;
        case 11: *reinterpret_cast<IconPixmapList*>(_v) = _t->overlayIconPixmap(); break;
        case 12: *reinterpret_cast<QString*>(_v) = _t->status(); break;
        case 13: *reinterpret_cast<QString*>(_v) = _t->title(); break;
        case 14: *reinterpret_cast<ToolTip*>(_v) = _t->toolTip(); break;
        case 15: *reinterpret_cast<int*>(_v) = _t->windowId(); break;
        default: break;
        }
    }
}

const QMetaObject *StatusNotifierItemAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusNotifierItemAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25StatusNotifierItemAdaptorE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int StatusNotifierItemAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void StatusNotifierItemAdaptor::NewAttentionIcon()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void StatusNotifierItemAdaptor::NewIcon()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void StatusNotifierItemAdaptor::NewOverlayIcon()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void StatusNotifierItemAdaptor::NewStatus(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void StatusNotifierItemAdaptor::NewTitle()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void StatusNotifierItemAdaptor::NewToolTip()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
