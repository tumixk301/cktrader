/****************************************************************************
** Meta object code from reading C++ file 'TradeForm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TradeForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TradeForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TradeForm_t {
    QByteArrayData data[6];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TradeForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TradeForm_t qt_meta_stringdata_TradeForm = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TradeForm"
QT_MOC_LITERAL(1, 10, 11), // "updateEvent"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "TradeData"
QT_MOC_LITERAL(4, 33, 5), // "trade"
QT_MOC_LITERAL(5, 39, 13) // "updateContent"

    },
    "TradeForm\0updateEvent\0\0TradeData\0trade\0"
    "updateContent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TradeForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void TradeForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TradeForm *_t = static_cast<TradeForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateEvent((*reinterpret_cast< TradeData(*)>(_a[1]))); break;
        case 1: _t->updateContent((*reinterpret_cast< TradeData(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TradeForm::*_t)(TradeData );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TradeForm::updateEvent)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TradeForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TradeForm.data,
      qt_meta_data_TradeForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TradeForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TradeForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TradeForm.stringdata0))
        return static_cast<void*>(const_cast< TradeForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int TradeForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void TradeForm::updateEvent(TradeData _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
