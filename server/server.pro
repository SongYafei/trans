#-------------------------------------------------
#
# Project created by QtCreator 2012-06-05T15:06:45
#
#-------------------------------------------------

QT       += core gui network
TARGET = server
TEMPLATE = app


SOURCES += main.cpp\
    server.cpp \
    serverthread.cpp \
    mserver.cpp

HEADERS  += \
    server.h \
    serverthread.h \
    mserver.h

FORMS    += mserver.ui
