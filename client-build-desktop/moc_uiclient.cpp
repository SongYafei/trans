/****************************************************************************
** Meta object code from reading C++ file 'uiclient.h'
**
** Created: Sat Jun 9 18:30:21 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../client/uiclient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uiclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIClient[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      29,    9,   21,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UIClient[] = {
    "UIClient\0\0sendFile()\0QString\0chooseFile()\0"
};

const QMetaObject UIClient::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UIClient,
      qt_meta_data_UIClient, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIClient))
        return static_cast<void*>(const_cast< UIClient*>(this));
    return QDialog::qt_metacast(_clname);
}

int UIClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sendFile(); break;
        case 1: { QString _r = chooseFile();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
