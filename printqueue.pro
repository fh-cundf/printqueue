TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    queue.cpp \
    job.cpp \
    node.cpp

HEADERS += \
    queue.h \
    job.h \
    node.h

