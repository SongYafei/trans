/****************************************************************************
** Meta object code from reading C++ file 'clientreconthread.h'
**
** Created: Fri Jun 8 12:49:27 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../client/clientreconthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientreconthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ClientReconThread[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ClientReconThread[] = {
    "ClientReconThread\0\0myReconOK()\0"
    "quitClientThread()\0"
};

const QMetaObject ClientReconThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ClientReconThread,
      qt_meta_data_ClientReconThread, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ClientReconThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ClientReconThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ClientReconThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ClientReconThread))
        return static_cast<void*>(const_cast< ClientReconThread*>(this));
    return QThread::qt_metacast(_clname);
}

int ClientReconThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: myReconOK(); break;
        case 1: quitClientThread(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ClientReconThread::myReconOK()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
