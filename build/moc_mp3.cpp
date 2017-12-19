/****************************************************************************
** Meta object code from reading C++ file 'mp3.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AudioSystem/mp3.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mp3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MP3_t {
    QByteArrayData data[15];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MP3_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MP3_t qt_meta_stringdata_MP3 = {
    {
QT_MOC_LITERAL(0, 0, 3), // "MP3"
QT_MOC_LITERAL(1, 4, 11), // "HomeClicked"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 19), // "on_btn_play_clicked"
QT_MOC_LITERAL(4, 37, 19), // "on_btn_stop_clicked"
QT_MOC_LITERAL(5, 57, 20), // "on_btn_pause_clicked"
QT_MOC_LITERAL(6, 78, 21), // "on_btn_folder_clicked"
QT_MOC_LITERAL(7, 100, 29), // "on_sliderProgress_sliderMoved"
QT_MOC_LITERAL(8, 130, 8), // "position"
QT_MOC_LITERAL(9, 139, 27), // "on_sliderVolume_sliderMoved"
QT_MOC_LITERAL(10, 167, 18), // "on_durationChanged"
QT_MOC_LITERAL(11, 186, 18), // "on_positionChanged"
QT_MOC_LITERAL(12, 205, 19), // "on_btn_next_clicked"
QT_MOC_LITERAL(13, 225, 23), // "on_btn_previous_clicked"
QT_MOC_LITERAL(14, 249, 21) // "on_pushButton_clicked"

    },
    "MP3\0HomeClicked\0\0on_btn_play_clicked\0"
    "on_btn_stop_clicked\0on_btn_pause_clicked\0"
    "on_btn_folder_clicked\0"
    "on_sliderProgress_sliderMoved\0position\0"
    "on_sliderVolume_sliderMoved\0"
    "on_durationChanged\0on_positionChanged\0"
    "on_btn_next_clicked\0on_btn_previous_clicked\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MP3[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    1,   79,    2, 0x08 /* Private */,
       9,    1,   82,    2, 0x08 /* Private */,
      10,    1,   85,    2, 0x08 /* Private */,
      11,    1,   88,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MP3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MP3 *_t = static_cast<MP3 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->HomeClicked(); break;
        case 1: _t->on_btn_play_clicked(); break;
        case 2: _t->on_btn_stop_clicked(); break;
        case 3: _t->on_btn_pause_clicked(); break;
        case 4: _t->on_btn_folder_clicked(); break;
        case 5: _t->on_sliderProgress_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_sliderVolume_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 8: _t->on_positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 9: _t->on_btn_next_clicked(); break;
        case 10: _t->on_btn_previous_clicked(); break;
        case 11: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MP3::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MP3::HomeClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MP3::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MP3.data,
      qt_meta_data_MP3,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MP3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MP3::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MP3.stringdata0))
        return static_cast<void*>(const_cast< MP3*>(this));
    return QWidget::qt_metacast(_clname);
}

int MP3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MP3::HomeClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
