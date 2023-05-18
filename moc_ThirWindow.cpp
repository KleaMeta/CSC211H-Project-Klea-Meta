/****************************************************************************
** Meta object code from reading C++ file 'ThirWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ThirWindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ThirWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSThirWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSThirWindowENDCLASS = QtMocHelpers::stringData(
    "ThirWindow",
    "on_pushButton_6_clicked",
    "",
    "displayScience",
    "displayTechnology",
    "displayEngineering",
    "displayMath",
    "displayImage",
    "displayBMCCMentor"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSThirWindowENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[11];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[18];
    char stringdata5[19];
    char stringdata6[12];
    char stringdata7[13];
    char stringdata8[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSThirWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSThirWindowENDCLASS_t qt_meta_stringdata_CLASSThirWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "ThirWindow"
        QT_MOC_LITERAL(11, 23),  // "on_pushButton_6_clicked"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 14),  // "displayScience"
        QT_MOC_LITERAL(51, 17),  // "displayTechnology"
        QT_MOC_LITERAL(69, 18),  // "displayEngineering"
        QT_MOC_LITERAL(88, 11),  // "displayMath"
        QT_MOC_LITERAL(100, 12),  // "displayImage"
        QT_MOC_LITERAL(113, 17)   // "displayBMCCMentor"
    },
    "ThirWindow",
    "on_pushButton_6_clicked",
    "",
    "displayScience",
    "displayTechnology",
    "displayEngineering",
    "displayMath",
    "displayImage",
    "displayBMCCMentor"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSThirWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ThirWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSThirWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSThirWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSThirWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ThirWindow, std::true_type>,
        // method 'on_pushButton_6_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayScience'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayTechnology'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayEngineering'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayMath'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayBMCCMentor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ThirWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThirWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_6_clicked(); break;
        case 1: _t->displayScience(); break;
        case 2: _t->displayTechnology(); break;
        case 3: _t->displayEngineering(); break;
        case 4: _t->displayMath(); break;
        case 5: _t->displayImage(); break;
        case 6: _t->displayBMCCMentor(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *ThirWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThirWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSThirWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ThirWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
