/****************************************************************************
** Meta object code from reading C++ file 'systemtrayicon.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../platformtheme/systemtrayicon.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemtrayicon.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14SystemTrayMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto SystemTrayMenu::qt_create_metaobjectdata<qt_meta_tag_ZN14SystemTrayMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SystemTrayMenu"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SystemTrayMenu, qt_meta_tag_ZN14SystemTrayMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SystemTrayMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlatformMenu::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SystemTrayMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SystemTrayMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14SystemTrayMenuE_t>.metaTypes,
    nullptr
} };

void SystemTrayMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SystemTrayMenu *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *SystemTrayMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemTrayMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SystemTrayMenuE_t>.strings))
        return static_cast<void*>(this);
    return QPlatformMenu::qt_metacast(_clname);
}

int SystemTrayMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformMenu::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN18SystemTrayMenuItemE_t {};
} // unnamed namespace

template <> constexpr inline auto SystemTrayMenuItem::qt_create_metaobjectdata<qt_meta_tag_ZN18SystemTrayMenuItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SystemTrayMenuItem"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SystemTrayMenuItem, qt_meta_tag_ZN18SystemTrayMenuItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SystemTrayMenuItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlatformMenuItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18SystemTrayMenuItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18SystemTrayMenuItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18SystemTrayMenuItemE_t>.metaTypes,
    nullptr
} };

void SystemTrayMenuItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SystemTrayMenuItem *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *SystemTrayMenuItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemTrayMenuItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18SystemTrayMenuItemE_t>.strings))
        return static_cast<void*>(this);
    return QPlatformMenuItem::qt_metacast(_clname);
}

int SystemTrayMenuItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformMenuItem::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
