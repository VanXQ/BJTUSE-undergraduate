/****************************************************************************
** Meta object code from reading C++ file 'WindowMusic.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../WindowMusic.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WindowMusic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WindowMusic_t {
    QByteArrayData data[8];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowMusic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowMusic_t qt_meta_stringdata_WindowMusic = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WindowMusic"
QT_MOC_LITERAL(1, 12, 11), // "musicToGame"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 27), // "set_music_background_change"
QT_MOC_LITERAL(4, 53, 22), // "on_Button_exit_clicked"
QT_MOC_LITERAL(5, 76, 22), // "on_Button_sure_clicked"
QT_MOC_LITERAL(6, 99, 19), // "on_btn_path_clicked"
QT_MOC_LITERAL(7, 119, 13) // "doGametoMusic"

    },
    "WindowMusic\0musicToGame\0\0"
    "set_music_background_change\0"
    "on_Button_exit_clicked\0on_Button_sure_clicked\0"
    "on_btn_path_clicked\0doGametoMusic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowMusic[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   48,    2, 0x08 /* Private */,
       5,    0,   49,    2, 0x08 /* Private */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WindowMusic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WindowMusic *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->musicToGame(); break;
        case 1: _t->set_music_background_change((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_Button_exit_clicked(); break;
        case 3: _t->on_Button_sure_clicked(); break;
        case 4: _t->on_btn_path_clicked(); break;
        case 5: _t->doGametoMusic(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WindowMusic::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowMusic::musicToGame)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WindowMusic::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowMusic::set_music_background_change)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WindowMusic::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_WindowMusic.data,
    qt_meta_data_WindowMusic,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WindowMusic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowMusic::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WindowMusic.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int WindowMusic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void WindowMusic::musicToGame()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WindowMusic::set_music_background_change(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
