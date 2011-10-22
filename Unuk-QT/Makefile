#############################################################################
# Makefile for building: Unuk-QT
# Generated by qmake (2.01a) (Qt 4.7.3) on: Sat Oct 22 17:32:53 2011
# Project:  Unuk-QT.pro
# Template: app
# Command: /usr/bin/qmake-qt4 -spec /usr/share/qt4/mkspecs/linux-g++ CONFIG+=debug -o Makefile Unuk-QT.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I.
LINK          = g++
LFLAGS        = 
LIBS          = $(SUBLIBS)  -L/usr/lib -lGL -lSDL -lGLU -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake-qt4
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = ../src/libUnuk/Vec2.cpp \
		../src/libUnuk/Sprite.cpp \
		../src/libUnuk/ImageLoader.cpp \
		../src/libUnuk/Debug.cpp \
		../src/Unuk/Player.cpp \
		../src/Unuk/main.cpp \
		../src/Unuk/Game.cpp \
		../src/libUnuk/Entity.cpp 
OBJECTS       = Vec2.o \
		Sprite.o \
		ImageLoader.o \
		Debug.o \
		Player.o \
		main.o \
		Game.o \
		Entity.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		Unuk-QT.pro
QMAKE_TARGET  = Unuk-QT
DESTDIR       = 
TARGET        = Unuk-QT

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: Unuk-QT.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ CONFIG+=debug -o Makefile Unuk-QT.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtGui.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ CONFIG+=debug -o Makefile Unuk-QT.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/Unuk-QT1.0.0 || $(MKDIR) .tmp/Unuk-QT1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/Unuk-QT1.0.0/ && $(COPY_FILE) --parents ../src/libUnuk/Vec2.h ../src/libUnuk/ImageLoader.h ../src/libUnuk/Sprite.h ../src/libUnuk/Debug.h ../src/Libs/wglext.h ../src/Libs/glxext.h ../src/Unuk/Game.h ../src/Unuk/Player.h ../src/libUnuk/KeyboardInterface.h ../src/libUnuk/XKeyboardInterface.h ../src/libUnuk/Static.h ../src/libUnuk/UnukWindow.h ../src/libUnuk/Geometry.h ../src/libUnuk/Entity.h ../src/libUnuk/EntityType.h .tmp/Unuk-QT1.0.0/ && $(COPY_FILE) --parents ../src/libUnuk/Vec2.cpp ../src/libUnuk/Sprite.cpp ../src/libUnuk/ImageLoader.cpp ../src/libUnuk/Debug.cpp ../src/Unuk/Player.cpp ../src/Unuk/main.cpp ../src/Unuk/Game.cpp ../src/libUnuk/Entity.cpp .tmp/Unuk-QT1.0.0/ && (cd `dirname .tmp/Unuk-QT1.0.0` && $(TAR) Unuk-QT1.0.0.tar Unuk-QT1.0.0 && $(COMPRESS) Unuk-QT1.0.0.tar) && $(MOVE) `dirname .tmp/Unuk-QT1.0.0`/Unuk-QT1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/Unuk-QT1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all:
compiler_moc_header_clean:
compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

Vec2.o: ../src/libUnuk/Vec2.cpp ../src/libUnuk/Vec2.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Vec2.o ../src/libUnuk/Vec2.cpp

Sprite.o: ../src/libUnuk/Sprite.cpp ../src/libUnuk/Sprite.h \
		../src/libUnuk/ImageLoader.h \
		../src/libUnuk/Debug.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Sprite.o ../src/libUnuk/Sprite.cpp

ImageLoader.o: ../src/libUnuk/ImageLoader.cpp ../src/libUnuk/ImageLoader.h \
		../src/libUnuk/Debug.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ImageLoader.o ../src/libUnuk/ImageLoader.cpp

Debug.o: ../src/libUnuk/Debug.cpp ../src/libUnuk/Debug.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Debug.o ../src/libUnuk/Debug.cpp

Player.o: ../src/Unuk/Player.cpp ../src/libUnuk/Sprite.h \
		../src/libUnuk/ImageLoader.h \
		../src/libUnuk/Debug.h \
		../src/libUnuk/KeyboardInterface.h \
		../src/Unuk/Player.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Player.o ../src/Unuk/Player.cpp

main.o: ../src/Unuk/main.cpp ../src/Unuk/Game.h \
		../src/Unuk/Player.h \
		../src/libUnuk/Sprite.h \
		../src/libUnuk/ImageLoader.h \
		../src/libUnuk/Debug.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o ../src/Unuk/main.cpp

Game.o: ../src/Unuk/Game.cpp ../src/Unuk/Game.h \
		../src/Unuk/Player.h \
		../src/libUnuk/Sprite.h \
		../src/libUnuk/ImageLoader.h \
		../src/libUnuk/Debug.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Game.o ../src/Unuk/Game.cpp

Entity.o: ../src/libUnuk/Entity.cpp ../src/libUnuk/Entity.h \
		../src/libUnuk/Geometry.h \
		../src/libUnuk/EntityType.h \
		../src/libUnuk/Static.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Entity.o ../src/libUnuk/Entity.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:
