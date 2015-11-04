TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -lglut -lGL -lGLU

SOURCES += main.cpp \
    lgl.cpp

HEADERS += \
    lgl.h

