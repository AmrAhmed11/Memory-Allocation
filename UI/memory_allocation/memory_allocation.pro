QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../../core/Memory-Allocation/allocate.cpp \
    ../../core/Memory-Allocation/compact.cpp \
    ../../core/Memory-Allocation/deallocate.cpp \
    ../../core/Memory-Allocation/input.cpp \
    ../../core/Memory-Allocation/validate.cpp \
    main.cpp \
    mainwindow.cpp
HEADERS += \
    ../../core/Memory-Allocation/allocate.h \
    ../../core/Memory-Allocation/compact.h \
    ../../core/Memory-Allocation/deallocate.h \
    ../../core/Memory-Allocation/hole.h \
    ../../core/Memory-Allocation/input.h \
    ../../core/Memory-Allocation/memory.h \
    ../../core/Memory-Allocation/process.h \
    ../../core/Memory-Allocation/segment.h \
    ../../core/Memory-Allocation/validate.h \
    mainwindow.h
FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
