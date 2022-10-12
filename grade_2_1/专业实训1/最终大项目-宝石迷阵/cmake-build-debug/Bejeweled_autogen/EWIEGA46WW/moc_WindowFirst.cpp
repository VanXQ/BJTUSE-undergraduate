/****************************************************************************
** Meta object code from reading C++ file 'WindowFirst.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../WindowFirst.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WindowFirst.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WindowFirst_t {
    QByteArrayData data[10];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowFirst_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowFirst_t qt_meta_stringdata_WindowFirst = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WindowFirst"
QT_MOC_LITERAL(1, 12, 10), // "mainToGame"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 25), // "on_btn_mainToGame_clicked"
QT_MOC_LITERAL(4, 50, 12), // "doGameToMain"
QT_MOC_LITERAL(5, 63, 25), // "on_btn_mainToRank_clicked"
QT_MOC_LITERAL(6, 89, 13), // "doNameConfirm"
QT_MOC_LITERAL(7, 103, 19), // "on_btn_name_clicked"
QT_MOC_LITERAL(8, 123, 19), // "on_btn_help_clicked"
QT_MOC_LITERAL(9, 143, 20) // "on_btn_about_clicked"

    },
    "WindowFirst\0mainToGame\0\0"
    "on_btn_mainToGame_clicked\0doGameToMain\0"
    "on_btn_mainToRank_clicked\0doNameConfirm\0"
    "on_btn_name_clicked\0on_btn_help_clicked\0"
    "on_btn_about_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowFirst[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

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

void WindowFirst::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WindowFirst *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mainToGame(); break;
        case 1: _t->on_btn_mainToGame_clicked(); break;
        case 2: _t->doGameToMain(); break;
        case 3: _t->on_btn_mainToRank_clicked(); break;
        case 4: _t->doNameConfirm(); break;
        case 5: _t->on_btn_name_clicked(); break;
        case 6: _t->on_btn_help_clicked(); break;
        case 7: _t->on_btn_about_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WindowFirst::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowFirst::mainToGame)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WindowFirst::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_WindowFirst.data,
    qt_meta_data_WindowFirst,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WindowFirst::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowFirst::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WindowFirst.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int WindowFirst::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void WindowFirst::mainToGame()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
