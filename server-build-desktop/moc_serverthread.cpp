/****************************************************************************
** Meta object code from reading C++ file 'serverthread.h'
**
** Created: Fri Jun 8 20:02:12 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../server/serverthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serverthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ServerThread[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   14,   13,   13, 0x05,
      57,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      71,   13,   13,   13, 0x0a,
      91,   13,   13,   13, 0x0a,
     110,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ServerThread[] = {
    "ServerThread\0\0socketError\0"
    "error(QTcpSocket::SocketError)\0"
    "transFinish()\0getFileFromClient()\0"
    "clientDisconnect()\0transComplete()\0"
};

const QMetaObject ServerThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ServerThread,
      qt_meta_data_ServerThread, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ServerThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ServerThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ServerThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ServerThread))
        return static_cast<void*>(const_cast< ServerThread*>(this));
    return QThread::qt_metacast(_clname);
}

int ServerThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: error((*reinterpret_cast< QTcpSocket::SocketError(*)>(_a[1]))); break;
        case 1: transFinish(); break;
        case 2: getFileFromClient(); break;
        case 3: clientDisconnect(); break;
        case 4: transComplete(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ServerThread::error(QTcpSocket::SocketError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ServerThread::transFinish()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
