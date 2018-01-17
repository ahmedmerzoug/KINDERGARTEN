## Process this file with automake to produce Makefile.in

INCLUDES = \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	@PACKAGE_CFLAGS@

bin_PROGRAMS = max

max_SOURCES = \
	main.c \
	support.c support.h \
	interface.c interface.h \
	callbacks.c callbacks.h \
        medecin.c medecin.h \
        maitresse.c maitresse.h \
        aide.c aide.h \
        classe.c classe.h \
        enfant.c enfant.h \
        pannes.c pannes.h \
        alerte.c alerte.h \
        braclet.c braclet.h \
        parent.c parent.h \
        camera.c camera.h \
        tech.c tech.h\
        envoyer_parent.c envoyer_parent.h \
        login.c login.h \
        enum.h 
        


max_LDADD = @PACKAGE_LIBS@ $(INTLLIBS)

