cmake_minimum_required(VERSION 3.0)

set(version 0.6)
configure_file(config.h.cmake_in config.h)

add_subdirectory(src)



########### install files ###############

#install(FILES  README 	AUTHORS 	ChangeLog 	NEWS DESTINATION )
#install(FILES  src/multivnc.desktop DESTINATION share/applications/)
#install(FILES  src/gui/res/multivnc.xpm DESTINATION share/pixmaps)



#original Makefile.am contents follow:

### Process this file with automake to produce Makefile.in
#
#ACLOCAL_AMFLAGS = -I m4
#
#SUBDIRS = src 
#
#multivncdocdir = ${datadir}/doc/multivnc
#multivncdoc_DATA = \
#	README\
#	AUTHORS\
#	ChangeLog\
#	NEWS
#
#Applicationsdir = $(datadir)/applications/
#Applications_DATA = src/multivnc.desktop
#
#pixmapdir = $(datadir)/pixmaps
#pixmap_DATA = src/gui/res/multivnc.xpm
#
#
#EXTRA_DIST = $(multivncdoc_DATA) \
#	     $(Applications_DATA) \
#	     $(pixmap_DATA)\
#	     multivnc.nsi\
#	     contrib/x11vnc contrib/windowshare.exe \
#	     contrib/VNCHooks.dll contrib/README-contrib.txt\
#	     contrib/tightvnc_win32_1.3.10.patch\
#	     debian/changelog  debian/compat  debian/control  debian/copyright\
#	     debian/dirs  debian/docs  debian/menu  debian/rules  debian/watch
#
#
#if DARWIN
#bundle_contents = MultiVNC.app/Contents
#appbundle: src/multivnc
#	mkdir -p $(bundle_contents)/MacOS
#	mkdir -p $(bundle_contents)/Resources
#	echo "APPL????" > $(bundle_contents)/PkgInfo
#	$(INSTALL_PROGRAM) $< $(bundle_contents)/MacOS/
#	cp contrib/x11vnc $(bundle_contents)/MacOS/
#	cp src/icon.icns $(bundle_contents)/Resources
#	cp README  $(bundle_contents)/Resources
#	cp NEWS    $(bundle_contents)/Resources
#	cp COPYING $(bundle_contents)/Resources
#	cp AUTHORS $(bundle_contents)/Resources
#	echo \
#	"<?xml version="1.0" encoding="UTF-8"?>\
#	<!DOCTYPE plist PUBLIC "-//Apple Computer//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd"\
#	<plist version="1.0">\
#	<dict>\
#	<key>CFBundleDevelopmentRegion</key>\
#	<string>English</string>\
#	<key>CFBundleExecutable</key>\
#	<string>@PACKAGE_NAME@</string>\
#	<key>CFBundleIconFile</key>\
#	<string>icon.icns</string>\
#	<key>CFBundleGetInfoString</key>\
#	<string>MultiVNC @PACKAGE_VERSION@, © Christian Beier (dontmind@freeshell.org) 2009 </string>\
#	<key>CFBundleName</key>  \
#	<string>MultiVNC</string> \
#	<key>CFBundlePackageType</key> \
#	<string>APPL</string>          \
#	<key>CFBundleShortVersionString</key> \
#	<string>@PACKAGE_VERSION@</string> \
#	<key>CFBundleVersion</key> \
#	<string>@PACKAGE_VERSION@</string> \
#	</dict>   \
#	</plist> \
#	" >  $(bundle_contents)/Info.plist
#endif
#
#
#if MINGW
#nsis_installer: all multivnc.nsi README NEWS COPYING
#	cat README | unix2dos > README.TXT
#	cat NEWS | unix2dos > NEWS.TXT
#	cat TODO | unix2dos > TODO.TXT
#	cat COPYING | unix2dos > COPYING.TXT
#	cp src/.libs/multivnc.exe src/multivnc.exe
#	$(STRIP) src/multivnc.exe
#	makensis multivnc.nsi 
#	
#zip_package: all  README NEWS COPYING
#	mkdir -p @PACKAGE_NAME@-@PACKAGE_VERSION@
#	cat README | unix2dos > @PACKAGE_NAME@-@PACKAGE_VERSION@/README.TXT
#	cat NEWS | unix2dos > @PACKAGE_NAME@-@PACKAGE_VERSION@/NEWS.TXT
#	cat TODO | unix2dos > @PACKAGE_NAME@-@PACKAGE_VERSION@/TODO.TXT
#	cat COPYING | unix2dos > @PACKAGE_NAME@-@PACKAGE_VERSION@/COPYING.TXT
#	cp src/.libs/multivnc.exe @PACKAGE_NAME@-@PACKAGE_VERSION@
#	$(STRIP) @PACKAGE_NAME@-@PACKAGE_VERSION@/multivnc.exe
#	cp src/mingwm10.dll @PACKAGE_NAME@-@PACKAGE_VERSION@
#	cp src/libgpg-error-0.dll @PACKAGE_NAME@-@PACKAGE_VERSION@
#	cp contrib/windowshare.exe @PACKAGE_NAME@-@PACKAGE_VERSION@
#	cp contrib/VNCHooks.dll @PACKAGE_NAME@-@PACKAGE_VERSION@
#	cp contrib/README-contrib.txt @PACKAGE_NAME@-@PACKAGE_VERSION@
#	zip @PACKAGE_NAME@-@PACKAGE_VERSION@-win32-portable.zip -r @PACKAGE_NAME@-@PACKAGE_VERSION@
#	rm -rf @PACKAGE_NAME@-@PACKAGE_VERSION@
#endif
#
#