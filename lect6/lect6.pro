QT       += core gui testlib

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    facadeclass.cpp \
    facadeclasstest.cpp \
    gameview.cpp \
    hellowidget.cpp \
    main.cpp \
    mainmenu.cpp \
    patientform.cpp \
    recordstable.cpp

HEADERS += \
    facadeclass.h \
    facadeclasstest.h \
    gameview.h \
    hellowidget.h \
    mainmenu.h \
    patientform.h \
    recordstable.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

FORMS += \
    patientform.ui \
    recordstable.ui

RESOURCES += \
    rc.qrc
