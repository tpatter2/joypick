/****************************************************************************
** Meta object code from reading C++ file 'qjoystick.h'
**
** Created: Sun Feb 13 19:55:37 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qjoystick.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjoystick.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QJoystick[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   11,   10,   10, 0x05,
      48,   41,   10,   10, 0x05,
      65,   41,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      93,   84,   10,   10, 0x0a,
     110,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QJoystick[] = {
    "QJoystick\0\0axis,value\0axisEvent(int,int)\0"
    "button\0buttonPress(int)\0buttonRelease(int)\0"
    "jsNumber\0setJoystick(int)\0detachJoystick()\0"
};

const QMetaObject QJoystick::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QJoystick,
      qt_meta_data_QJoystick, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QJoystick::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QJoystick::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QJoystick::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QJoystick))
        return static_cast<void*>(const_cast< QJoystick*>(this));
    return QObject::qt_metacast(_clname);
}

int QJoystick::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: axisEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: buttonPress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: buttonRelease((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: setJoystick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: detachJoystick(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QJoystick::axisEvent(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QJoystick::buttonPress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QJoystick::buttonRelease(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
