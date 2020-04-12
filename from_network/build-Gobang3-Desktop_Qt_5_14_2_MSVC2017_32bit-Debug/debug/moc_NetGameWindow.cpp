/****************************************************************************
** Meta object code from reading C++ file 'NetGameWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../GoBang-master/NetGameWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetGameWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetGameWindow_t {
    QByteArrayData data[15];
    char stringdata0[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetGameWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetGameWindow_t qt_meta_stringdata_NetGameWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NetGameWindow"
QT_MOC_LITERAL(1, 14, 23), // "processPendingDatagrams"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 21), // "on_sendButton_clicked"
QT_MOC_LITERAL(4, 61, 19), // "on_readyBtn_clicked"
QT_MOC_LITERAL(5, 81, 20), // "on_giveupBtn_clicked"
QT_MOC_LITERAL(6, 102, 18), // "on_backBtn_clicked"
QT_MOC_LITERAL(7, 121, 18), // "on_quitBtn_clicked"
QT_MOC_LITERAL(8, 140, 22), // "on_actionNet_triggered"
QT_MOC_LITERAL(9, 163, 23), // "on_actionHome_triggered"
QT_MOC_LITERAL(10, 187, 29), // "on_actionScreenshot_triggered"
QT_MOC_LITERAL(11, 217, 27), // "on_actionComputer_triggered"
QT_MOC_LITERAL(12, 245, 25), // "on_actionPeople_triggered"
QT_MOC_LITERAL(13, 271, 23), // "on_actionQuit_triggered"
QT_MOC_LITERAL(14, 295, 23) // "on_actionBack_triggered"

    },
    "NetGameWindow\0processPendingDatagrams\0"
    "\0on_sendButton_clicked\0on_readyBtn_clicked\0"
    "on_giveupBtn_clicked\0on_backBtn_clicked\0"
    "on_quitBtn_clicked\0on_actionNet_triggered\0"
    "on_actionHome_triggered\0"
    "on_actionScreenshot_triggered\0"
    "on_actionComputer_triggered\0"
    "on_actionPeople_triggered\0"
    "on_actionQuit_triggered\0on_actionBack_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetGameWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NetGameWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetGameWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processPendingDatagrams(); break;
        case 1: _t->on_sendButton_clicked(); break;
        case 2: _t->on_readyBtn_clicked(); break;
        case 3: _t->on_giveupBtn_clicked(); break;
        case 4: _t->on_backBtn_clicked(); break;
        case 5: _t->on_quitBtn_clicked(); break;
        case 6: _t->on_actionNet_triggered(); break;
        case 7: _t->on_actionHome_triggered(); break;
        case 8: _t->on_actionScreenshot_triggered(); break;
        case 9: _t->on_actionComputer_triggered(); break;
        case 10: _t->on_actionPeople_triggered(); break;
        case 11: _t->on_actionQuit_triggered(); break;
        case 12: _t->on_actionBack_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject NetGameWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_NetGameWindow.data,
    qt_meta_data_NetGameWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NetGameWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetGameWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetGameWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int NetGameWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
