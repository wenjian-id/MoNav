# -------------------------------------------------
# Project created by QtCreator 2010-06-15T15:30:10
# -------------------------------------------------
TARGET = MoNavClient
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    mapview.cpp \
    paintwidget.cpp \
    addressdialog.cpp \
    bookmarksdialog.cpp \
    routedescriptiondialog.cpp
HEADERS += mainwindow.h \
    mapview.h \
    paintwidget.h \
    utils/coordinates.h \
    utils/config.h \
    interfaces/irenderer.h \
    interfaces/iaddresslookup.h \
    addressdialog.h \
    interfaces/igpslookup.h \
    interfaces/irouter.h \
    bookmarksdialog.h \
    routedescriptiondialog.h \
    descriptiongenerator.h \
    fullscreenexitbutton.h
FORMS += mainwindow.ui \
    mapview.ui \
    paintwidget.ui \
    addressdialog.ui \
    bookmarksdialog.ui \
    routedescriptiondialog.ui
DESTDIR = ../bin
TARGET = MoNavC
unix {
	QMAKE_CXXFLAGS_RELEASE -= -O2
	QMAKE_CXXFLAGS_RELEASE += -O3 \
		 -Wno-unused-function
	QMAKE_CXXFLAGS_DEBUG += -Wno-unused-function
}
maemo5 {
	QT += maemo5
}
RESOURCES += images.qrc
LIBS += -L../bin/plugins_client -lmapnikrendererclient -lcontractionhierarchiesclient -lgpsgridclient -losmrendererclient -lunicodetournamenttrieclient
#required by osmrendererclient
QT += network
CONFIG += mobility
MOBILITY += location
