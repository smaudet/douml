/****************************************************************************
** Meta object code from reading C++ file 'EdgeMenuDialog.h'
**
** Created: Fri May 24 23:48:41 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialog/EdgeMenuDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EdgeMenuDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EdgeMenuDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      40,   15,   15,   15, 0x05,
      52,   15,   15,   15, 0x05,
      67,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      90,   15,   15,   15, 0x0a,
     110,   15,   15,   15, 0x0a,
     134,   15,   15,   15, 0x0a,
     157,   15,   15,   15, 0x0a,
     182,   15,   15,   15, 0x0a,
     215,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EdgeMenuDialog[] = {
    "EdgeMenuDialog\0\0edgeMenuRequested(uint)\0"
    "lostFocus()\0hideEdgeMenu()\0"
    "repositionMenu(QPoint)\0OnPickNextSibling()\0"
    "OnPickPreviousSibling()\0OnInitiateMove(QPoint)\0"
    "OnInitiateResize(QPoint)\0"
    "OnNewCoordinatesReceived(QPoint)\0"
    "OnChangeTab(int)\0"
};

void EdgeMenuDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EdgeMenuDialog *_t = static_cast<EdgeMenuDialog *>(_o);
        switch (_id) {
        case 0: _t->edgeMenuRequested((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->lostFocus(); break;
        case 2: _t->hideEdgeMenu(); break;
        case 3: _t->repositionMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->OnPickNextSibling(); break;
        case 5: _t->OnPickPreviousSibling(); break;
        case 6: _t->OnInitiateMove((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 7: _t->OnInitiateResize((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 8: _t->OnNewCoordinatesReceived((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 9: _t->OnChangeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EdgeMenuDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EdgeMenuDialog::staticMetaObject = {
    { &Q3TabDialog::staticMetaObject, qt_meta_stringdata_EdgeMenuDialog,
      qt_meta_data_EdgeMenuDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EdgeMenuDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EdgeMenuDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EdgeMenuDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EdgeMenuDialog))
        return static_cast<void*>(const_cast< EdgeMenuDialog*>(this));
    if (!strcmp(_clname, "EdgeMenuDialogBase"))
        return static_cast< EdgeMenuDialogBase*>(const_cast< EdgeMenuDialog*>(this));
    return Q3TabDialog::qt_metacast(_clname);
}

int EdgeMenuDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3TabDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void EdgeMenuDialog::edgeMenuRequested(uint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EdgeMenuDialog::lostFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void EdgeMenuDialog::hideEdgeMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void EdgeMenuDialog::repositionMenu(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
