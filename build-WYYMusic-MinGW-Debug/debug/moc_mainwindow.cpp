/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../WYYMusic/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata0[399];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "sendNoVolume"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "currVolume"
QT_MOC_LITERAL(4, 36, 10), // "sendVolume"
QT_MOC_LITERAL(5, 47, 17), // "onDurationChanged"
QT_MOC_LITERAL(6, 65, 8), // "duration"
QT_MOC_LITERAL(7, 74, 17), // "onPositionChanged"
QT_MOC_LITERAL(8, 92, 8), // "position"
QT_MOC_LITERAL(9, 101, 9), // "getVolume"
QT_MOC_LITERAL(10, 111, 5), // "value"
QT_MOC_LITERAL(11, 117, 18), // "on_btn_min_clicked"
QT_MOC_LITERAL(12, 136, 19), // "on_btn_quit_clicked"
QT_MOC_LITERAL(13, 156, 18), // "on_btn_max_clicked"
QT_MOC_LITERAL(14, 175, 7), // "checked"
QT_MOC_LITERAL(15, 183, 26), // "on_btn_chooseMusic_clicked"
QT_MOC_LITERAL(16, 210, 34), // "on_horizontalSlider_sliderRel..."
QT_MOC_LITERAL(17, 245, 25), // "on_btn_pauseMusic_clicked"
QT_MOC_LITERAL(18, 271, 32), // "on_tableWidget_itemDoubleClicked"
QT_MOC_LITERAL(19, 304, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(20, 322, 4), // "item"
QT_MOC_LITERAL(21, 327, 24), // "on_btn_lastMusic_clicked"
QT_MOC_LITERAL(22, 352, 24), // "on_btn_nextMusic_clicked"
QT_MOC_LITERAL(23, 377, 21) // "on_btn_volume_clicked"

    },
    "MainWindow\0sendNoVolume\0\0currVolume\0"
    "sendVolume\0onDurationChanged\0duration\0"
    "onPositionChanged\0position\0getVolume\0"
    "value\0on_btn_min_clicked\0on_btn_quit_clicked\0"
    "on_btn_max_clicked\0checked\0"
    "on_btn_chooseMusic_clicked\0"
    "on_horizontalSlider_sliderReleased\0"
    "on_btn_pauseMusic_clicked\0"
    "on_tableWidget_itemDoubleClicked\0"
    "QTableWidgetItem*\0item\0on_btn_lastMusic_clicked\0"
    "on_btn_nextMusic_clicked\0on_btn_volume_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    0,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   93,    2, 0x08 /* Private */,
       7,    1,   96,    2, 0x08 /* Private */,
       9,    1,   99,    2, 0x08 /* Private */,
      11,    0,  102,    2, 0x08 /* Private */,
      12,    0,  103,    2, 0x08 /* Private */,
      13,    1,  104,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    1,  109,    2, 0x08 /* Private */,
      18,    1,  112,    2, 0x08 /* Private */,
      21,    0,  115,    2, 0x08 /* Private */,
      22,    0,  116,    2, 0x08 /* Private */,
      23,    1,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    6,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendNoVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sendVolume(); break;
        case 2: _t->onDurationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->onPositionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->getVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_btn_min_clicked(); break;
        case 6: _t->on_btn_quit_clicked(); break;
        case 7: _t->on_btn_max_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_btn_chooseMusic_clicked(); break;
        case 9: _t->on_horizontalSlider_sliderReleased(); break;
        case 10: _t->on_btn_pauseMusic_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_tableWidget_itemDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 12: _t->on_btn_lastMusic_clicked(); break;
        case 13: _t->on_btn_nextMusic_clicked(); break;
        case 14: _t->on_btn_volume_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendNoVolume)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendVolume)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::sendNoVolume(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::sendVolume()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
