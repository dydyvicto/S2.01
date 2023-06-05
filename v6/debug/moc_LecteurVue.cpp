/****************************************************************************
** Meta object code from reading C++ file 'LecteurVue.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../LecteurVue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LecteurVue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LecteurVue_t {
    const uint offsetsAndSize[28];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_LecteurVue_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_LecteurVue_t qt_meta_stringdata_LecteurVue = {
    {
QT_MOC_LITERAL(0, 10), // "LecteurVue"
QT_MOC_LITERAL(11, 7), // "avancer"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 7), // "reculer"
QT_MOC_LITERAL(28, 11), // "lancerDiapo"
QT_MOC_LITERAL(40, 12), // "arreterDiapo"
QT_MOC_LITERAL(53, 7), // "cb_cat1"
QT_MOC_LITERAL(61, 7), // "cb_cat2"
QT_MOC_LITERAL(69, 7), // "cb_cat3"
QT_MOC_LITERAL(77, 12), // "chargerDiapo"
QT_MOC_LITERAL(90, 14), // "changerVitesse"
QT_MOC_LITERAL(105, 10), // "getVitesse"
QT_MOC_LITERAL(116, 12), // "enleverDiapo"
QT_MOC_LITERAL(129, 7) // "aPropos"

    },
    "LecteurVue\0avancer\0\0reculer\0lancerDiapo\0"
    "arreterDiapo\0cb_cat1\0cb_cat2\0cb_cat3\0"
    "chargerDiapo\0changerVitesse\0getVitesse\0"
    "enleverDiapo\0aPropos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LecteurVue[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x0a,    1 /* Public */,
       3,    0,   87,    2, 0x0a,    2 /* Public */,
       4,    0,   88,    2, 0x0a,    3 /* Public */,
       5,    0,   89,    2, 0x0a,    4 /* Public */,
       6,    1,   90,    2, 0x0a,    5 /* Public */,
       7,    1,   93,    2, 0x0a,    7 /* Public */,
       8,    1,   96,    2, 0x0a,    9 /* Public */,
       9,    0,   99,    2, 0x0a,   11 /* Public */,
      10,    0,  100,    2, 0x0a,   12 /* Public */,
      11,    0,  101,    2, 0x0a,   13 /* Public */,
      12,    0,  102,    2, 0x0a,   14 /* Public */,
      13,    0,  103,    2, 0x0a,   15 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LecteurVue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LecteurVue *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->avancer(); break;
        case 1: _t->reculer(); break;
        case 2: _t->lancerDiapo(); break;
        case 3: _t->arreterDiapo(); break;
        case 4: _t->cb_cat1((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->cb_cat2((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->cb_cat3((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->chargerDiapo(); break;
        case 8: _t->changerVitesse(); break;
        case 9: { int _r = _t->getVitesse();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->enleverDiapo(); break;
        case 11: _t->aPropos(); break;
        default: ;
        }
    }
}

const QMetaObject LecteurVue::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_LecteurVue.offsetsAndSize,
    qt_meta_data_LecteurVue,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_LecteurVue_t
, QtPrivate::TypeAndForceComplete<LecteurVue, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *LecteurVue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LecteurVue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LecteurVue.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int LecteurVue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
