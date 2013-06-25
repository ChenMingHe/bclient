#-------------------------------------------------
#
# Project created by QtCreator 2013-06-25T14:24:24
#
#-------------------------------------------------

QT       += core gui network

TARGET = BClient
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    UdpServer.cpp \
    test/TestUdpServer.cpp \
    UdpSender.cpp \
    test/TestUdpSender.cpp \
    Config.cpp \
    MessageStatistics.cpp \
    AboutUsDialog.cpp \
    ConfigDialog.cpp \
    TimeRequestThread.cpp

HEADERS  += MainWindow.h \
    UdpServer.h \
    UdpSender.h \
    Config.h \
    MessageStatistics.h \
    AboutUsDialog.h \
    ConfigDialog.h \
    TimeRequestThread.h

FORMS    += \
    MessageStatistics.ui \
    AboutUsDialog.ui \
    ConfigDialog.ui \
    MainWindow.ui
