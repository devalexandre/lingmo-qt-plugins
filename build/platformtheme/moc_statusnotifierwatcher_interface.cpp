/****************************************************************************
** Meta object code from reading C++ file 'statusnotifierwatcher_interface.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "statusnotifierwatcher_interface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statusnotifierwatcher_interface.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN36OrgKdeStatusNotifierWatcherInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto OrgKdeStatusNotifierWatcherInterface::qt_create_metaobjectdata<qt_meta_tag_ZN36OrgKdeStatusNotifierWatcherInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OrgKdeStatusNotifierWatcherInterface",
        "StatusNotifierHostRegistered",
        "",
        "StatusNotifierHostUnregistered",
        "StatusNotifierItemRegistered",
        "in0",
        "StatusNotifierItemUnregistered",
        "RegisterStatusNotifierHost",
        "QDBusPendingReply<>",
        "service",
        "RegisterStatusNotifierItem",
        "IsStatusNotifierHostRegistered",
        "ProtocolVersion",
        "RegisteredStatusNotifierItems"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'StatusNotifierHostRegistered'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'StatusNotifierHostUnregistered'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'StatusNotifierItemRegistered'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'StatusNotifierItemUnregistered'
        QtMocHelpers::SignalData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'RegisterStatusNotifierHost'
        QtMocHelpers::SlotData<QDBusPendingReply<>(const QString &)>(7, 2, QMC::AccessPublic, 0x80000000 | 8, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'RegisterStatusNotifierItem'
        QtMocHelpers::SlotData<QDBusPendingReply<>(const QString &)>(10, 2, QMC::AccessPublic, 0x80000000 | 8, {{
            { QMetaType::QString, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'IsStatusNotifierHostRegistered'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'ProtocolVersion'
        QtMocHelpers::PropertyData<int>(12, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'RegisteredStatusNotifierItems'
        QtMocHelpers::PropertyData<QStringList>(13, QMetaType::QStringList, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OrgKdeStatusNotifierWatcherInterface, qt_meta_tag_ZN36OrgKdeStatusNotifierWatcherInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OrgKdeStatusNotifierWatcherInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN36OrgKdeStatusNotifierWatcherInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN36OrgKdeStatusNotifierWatcherInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN36OrgKdeStatusNotifierWatcherInterfaceE_t>.metaTypes,
    nullptr
} };

void OrgKdeStatusNotifierWatcherInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OrgKdeStatusNotifierWatcherInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->StatusNotifierHostRegistered(); break;
        case 1: _t->StatusNotifierHostUnregistered(); break;
        case 2: _t->StatusNotifierItemRegistered((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->StatusNotifierItemUnregistered((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: { QDBusPendingReply<> _r = _t->RegisterStatusNotifierHost((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 5: { QDBusPendingReply<> _r = _t->RegisterStatusNotifierItem((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OrgKdeStatusNotifierWatcherInterface::*)()>(_a, &OrgKdeStatusNotifierWatcherInterface::StatusNotifierHostRegistered, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdeStatusNotifierWatcherInterface::*)()>(_a, &OrgKdeStatusNotifierWatcherInterface::StatusNotifierHostUnregistered, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdeStatusNotifierWatcherInterface::*)(const QString & )>(_a, &OrgKdeStatusNotifierWatcherInterface::StatusNotifierItemRegistered, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdeStatusNotifierWatcherInterface::*)(const QString & )>(_a, &OrgKdeStatusNotifierWatcherInterface::StatusNotifierItemUnregistered, 3))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isStatusNotifierHostRegistered(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->protocolVersion(); break;
        case 2: *reinterpret_cast<QStringList*>(_v) = _t->registeredStatusNotifierItems(); break;
        default: break;
        }
    }
}

const QMetaObject *OrgKdeStatusNotifierWatcherInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgKdeStatusNotifierWatcherInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN36OrgKdeStatusNotifierWatcherInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgKdeStatusNotifierWatcherInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void OrgKdeStatusNotifierWatcherInterface::StatusNotifierHostRegistered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OrgKdeStatusNotifierWatcherInterface::StatusNotifierHostUnregistered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OrgKdeStatusNotifierWatcherInterface::StatusNotifierItemRegistered(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void OrgKdeStatusNotifierWatcherInterface::StatusNotifierItemUnregistered(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
