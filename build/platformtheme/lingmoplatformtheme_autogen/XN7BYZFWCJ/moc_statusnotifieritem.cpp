/****************************************************************************
** Meta object code from reading C++ file 'statusnotifieritem.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../platformtheme/statusnotifier/statusnotifieritem.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statusnotifieritem.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18StatusNotifierItemE_t {};
} // unnamed namespace

template <> constexpr inline auto StatusNotifierItem::qt_create_metaobjectdata<qt_meta_tag_ZN18StatusNotifierItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "StatusNotifierItem",
        "activateRequested",
        "",
        "QPoint",
        "pos",
        "secondaryActivateRequested",
        "scrollRequested",
        "delta",
        "Qt::Orientation",
        "orientation",
        "Activate",
        "x",
        "y",
        "SecondaryActivate",
        "ContextMenu",
        "Scroll",
        "showMessage",
        "title",
        "msg",
        "iconName",
        "secs",
        "onServiceOwnerChanged",
        "service",
        "oldOwner",
        "newOwner",
        "onMenuDestroyed",
        "Category",
        "Title",
        "Id",
        "Status",
        "Menu",
        "QDBusObjectPath",
        "IconName",
        "IconPixmap",
        "IconPixmapList",
        "OverlayIconName",
        "OverlayIconPixmap",
        "AttentionIconName",
        "AttentionIconPixmap",
        "ToolTip"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'activateRequested'
        QtMocHelpers::SignalData<void(const QPoint &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'secondaryActivateRequested'
        QtMocHelpers::SignalData<void(const QPoint &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'scrollRequested'
        QtMocHelpers::SignalData<void(int, Qt::Orientation)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'Activate'
        QtMocHelpers::SlotData<void(int, int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 11 }, { QMetaType::Int, 12 },
        }}),
        // Slot 'SecondaryActivate'
        QtMocHelpers::SlotData<void(int, int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 11 }, { QMetaType::Int, 12 },
        }}),
        // Slot 'ContextMenu'
        QtMocHelpers::SlotData<void(int, int)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 11 }, { QMetaType::Int, 12 },
        }}),
        // Slot 'Scroll'
        QtMocHelpers::SlotData<void(int, const QString &)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::QString, 9 },
        }}),
        // Slot 'showMessage'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &, int)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 }, { QMetaType::QString, 18 }, { QMetaType::QString, 19 }, { QMetaType::Int, 20 },
        }}),
        // Slot 'onServiceOwnerChanged'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 22 }, { QMetaType::QString, 23 }, { QMetaType::QString, 24 },
        }}),
        // Slot 'onMenuDestroyed'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'Category'
        QtMocHelpers::PropertyData<QString>(26, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'Title'
        QtMocHelpers::PropertyData<QString>(27, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'Id'
        QtMocHelpers::PropertyData<QString>(28, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'Status'
        QtMocHelpers::PropertyData<QString>(29, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'Menu'
        QtMocHelpers::PropertyData<QDBusObjectPath>(30, 0x80000000 | 31, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'IconName'
        QtMocHelpers::PropertyData<QString>(32, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'IconPixmap'
        QtMocHelpers::PropertyData<IconPixmapList>(33, 0x80000000 | 34, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'OverlayIconName'
        QtMocHelpers::PropertyData<QString>(35, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'OverlayIconPixmap'
        QtMocHelpers::PropertyData<IconPixmapList>(36, 0x80000000 | 34, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'AttentionIconName'
        QtMocHelpers::PropertyData<QString>(37, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'AttentionIconPixmap'
        QtMocHelpers::PropertyData<IconPixmapList>(38, 0x80000000 | 34, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'ToolTip'
        QtMocHelpers::PropertyData<ToolTip>(39, 0x80000000 | 39, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<StatusNotifierItem, qt_meta_tag_ZN18StatusNotifierItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject StatusNotifierItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18StatusNotifierItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18StatusNotifierItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18StatusNotifierItemE_t>.metaTypes,
    nullptr
} };

void StatusNotifierItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<StatusNotifierItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->activateRequested((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 1: _t->secondaryActivateRequested((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 2: _t->scrollRequested((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Qt::Orientation>>(_a[2]))); break;
        case 3: _t->Activate((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->SecondaryActivate((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->ContextMenu((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->Scroll((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->showMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 8: _t->onServiceOwnerChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 9: _t->onMenuDestroyed(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (StatusNotifierItem::*)(const QPoint & )>(_a, &StatusNotifierItem::activateRequested, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (StatusNotifierItem::*)(const QPoint & )>(_a, &StatusNotifierItem::secondaryActivateRequested, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (StatusNotifierItem::*)(int , Qt::Orientation )>(_a, &StatusNotifierItem::scrollRequested, 2))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
        case 8:
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< IconPixmapList >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
        case 11:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ToolTip >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->category(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->title(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->id(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->status(); break;
        case 4: *reinterpret_cast<QDBusObjectPath*>(_v) = _t->menu(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->iconName(); break;
        case 6: *reinterpret_cast<IconPixmapList*>(_v) = _t->iconPixmap(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->overlayIconName(); break;
        case 8: *reinterpret_cast<IconPixmapList*>(_v) = _t->overlayIconPixmap(); break;
        case 9: *reinterpret_cast<QString*>(_v) = _t->attentionIconName(); break;
        case 10: *reinterpret_cast<IconPixmapList*>(_v) = _t->attentionIconPixmap(); break;
        case 11: *reinterpret_cast<ToolTip*>(_v) = _t->toolTip(); break;
        default: break;
        }
    }
}

const QMetaObject *StatusNotifierItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusNotifierItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18StatusNotifierItemE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StatusNotifierItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void StatusNotifierItem::activateRequested(const QPoint & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void StatusNotifierItem::secondaryActivateRequested(const QPoint & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void StatusNotifierItem::scrollRequested(int _t1, Qt::Orientation _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}
QT_WARNING_POP
