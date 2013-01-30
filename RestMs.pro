# -------------------------------------------------
# Project created by QtCreator 2011-06-10T13:50:09
# -------------------------------------------------
QT += sql
TARGET = RestMs
TEMPLATE = app
SOURCES += main.cpp \
    login.cpp \
    interface.cpp \
    iconitem.cpp \
    db.cpp \
    menuinfo.cpp \
    tableinfo.cpp \
    costrec.cpp \
    dishinfo.cpp \
    tablemng.cpp \
    booking/bookingmng.cpp \
    openTable/opentable.cpp \
    orderMng/ordermng.cpp \
    ordermng/makeorder.cpp \
    userMng/waiter.cpp \
    userMng/table.cpp \
    calender.cpp
HEADERS += login.h \
    interface.h \
    iconitem.h \
    db.h \
    menuinfo.h \
    tableinfo.h \
    costrec.h \
    dishinfo.h \
    tablemng.h \
    booking/bookingmng.h \
    openTable/opentable.h \
    orderMng/ordermng.h \
    ordermng/makeorder.h \
    userMng/waiter.h \
    userMng/table.h \
    calender.h
FORMS += login.ui \
    menuinfo.ui \
    tableinfo.ui \
    booking/bookingmng.ui \
    openTable/opentable.ui \
    orderMng/ordermng.ui \
    ordermng/makeorder.ui \
    userMng/waiter.ui \
    userMng/table.ui \
    calender.ui
RESOURCES += images.qrc
OTHER_FILES += userMng/data.txt
