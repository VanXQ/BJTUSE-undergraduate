/****************************************************************************
** Meta object code from reading C++ file 'WindowTheme.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../WindowTheme.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WindowTheme.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WindowTheme_t {
    QByteArrayData data[10];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowTheme_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowTheme_t qt_meta_stringdata_WindowTheme = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WindowTheme"
QT_MOC_LITERAL(1, 12, 28), // "game_theme_background_change"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 13), // "doThemetoGame"
QT_MOC_LITERAL(4, 56, 11), // "changeTheme"
QT_MOC_LITERAL(5, 68, 20), // "set_theme_gem_change"
QT_MOC_LITERAL(6, 89, 26), // "on_btn_themeToGame_clicked"
QT_MOC_LITERAL(7, 116, 45), // "on_toolButton_selsect_backgro..."
QT_MOC_LITERAL(8, 162, 28), // "on_btn_theme_confirm_clicked"
QT_MOC_LITERAL(9, 191, 13) // "doGametoTheme"

    },
    "WindowTheme\0game_theme_background_change\0"
    "\0doThemetoGame\0changeTheme\0"
    "set_theme_gem_change\0on_btn_themeToGame_clicked\0"
    "on_toolButton_selsect_backgroundiamgs_clicked\0"
    "on_btn_theme_confirm_clicked\0doGametoTheme"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowTheme[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    0,   57,    2, 0x06 /* Public */,
       4,    1,   58,    2, 0x06 /* Public */,
       5,    1,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WindowTheme::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WindowTheme *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->game_theme_background_change((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->doThemetoGame(); break;
        case 2: _t->changeTheme((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->set_theme_gem_change((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->on_btn_themeToGame_clicked(); break;
        case 5: _t->on_toolButton_selsect_backgroundiamgs_clicked(); break;
        case 6: _t->on_btn_theme_confirm_clicked(); break;
        case 7: _t->doGametoTheme(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WindowTheme::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowTheme::game_theme_background_change)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WindowTheme::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowTheme::doThemetoGame)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WindowTheme::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowTheme::changeTheme)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WindowTheme::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowTheme::set_theme_gem_change)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WindowTheme::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_WindowTheme.data,
    qt_meta_data_WindowTheme,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WindowTheme::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowTheme::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WindowTheme.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int WindowTheme::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WindowTheme::game_theme_background_change(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WindowTheme::doThemetoGame()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WindowTheme::changeTheme(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WindowTheme::set_theme_gem_change(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
