## Process this file with automake to produce Makefile.in

# We require automake 1.6 at least.
AUTOMAKE_OPTIONS = 1.6

# This is a blank Makefile.am for using gtk-doc.
# Copy this to your project's API docs directory and modify the variables to
# suit your project. See the GTK+ Makefiles in gtk+/docs/reference for examples
# of using the various options.

# The name of the module, e.g. 'glib'.
DOC_MODULE=libbrasero-media

# The top-level SGML file. You can change this if you want to.
DOC_MAIN_SGML_FILE=$(DOC_MODULE)-docs.sgml

# The directory containing the source code. Relative to $(srcdir).
# gtk-doc will search all .c & .h files beneath here for inline comments
# documenting the functions and macros.
# e.g. DOC_SOURCE_DIR=../../../gtk
DOC_SOURCE_DIR=$(top_srcdir)/libbrasero-media $(top_builddir)/libbrasero-media

# Extra options to pass to gtkdoc-scangobj. Not normally needed.
SCANGOBJ_OPTIONS=

# Extra options to supply to gtkdoc-scan.
# e.g. SCAN_OPTIONS=--deprecated-guards="GTK_DISABLE_DEPRECATED" 
SCAN_OPTIONS=--rebuild-types

# Extra options to supply to gtkdoc-mkdb.
# e.g. MKDB_OPTIONS=--sgml-mode --output-format=xml
MKDB_OPTIONS=--sgml-mode --output-format=xml

# Extra options to supply to gtkdoc-mktmpl
# e.g. MKTMPL_OPTIONS=--only-section-tmpl
MKTMPL_OPTIONS=

# Extra options to supply to gtkdoc-fixref. Not normally needed.
# e.g. FIXXREF_OPTIONS=--extra-dir=../gdk-pixbuf/html --extra-dir=../gdk/html
FIXXREF_OPTIONS=

# Used for dependencies. The docs will be rebuilt if any of these change.
# e.g. HFILE_GLOB=$(top_srcdir)/gtk/*.h
# e.g. CFILE_GLOB=$(top_srcdir)/gtk/*.c
HFILE_GLOB=$(top_srcdir)/libbrasero-media/*.h
CFILE_GLOB=$(top_srcdir)/libbrasero-media/*.c

# Header files to ignore when scanning.
# e.g. IGNORE_HFILES=gtkdebug.h gtkintl.h
IGNORE_HFILES=	libbrasero-marshal.h	\
		brasero-gio-operation.h	\
		burn-volume-source.h	\
		scsi-base.h		\
		scsi-error.h		\
		scsi-mmc1.h		\
		scsi-opcodes.h		\
		scsi-read-disc-info.h	\
		scsi-read-track-information.h	\
		scsi-status-page.h		\
		scsi-command.h			\
		scsi-get-configuration.h	\
		scsi-mmc2.h			\
		scsi-q-subchannel.h		\
		scsi-read-disc-structure.h	\
		scsi-sbc.h			\
		scsi-utils.h			\
		scsi-device.h			\
		scsi-get-performance.h		\
		scsi-mmc3.h			\
		scsi-read-capacity.h		\
		scsi-read-format-capacities.h	\
		scsi-sense-data.h		\
		scsi-write-page.h		\
		scsi-dvd-structures.h		\
		scsi-mech-status.h		\
		scsi-mode-pages.h		\
		scsi-read-cd.h			\
		scsi-read-toc-pma-atip.h	\
		scsi-spc1.h			\
		burn-iso-field.h	\
		burn-iso9660.h		\
		burn-volume.h		\
		brasero-media-private.h	\
		brasero-medium-selection-priv.h	\
		burn-susp.h		\
		scsi-inquiry.h


# Images to copy into HTML directory.
# e.g. HTML_IMAGES=$(top_srcdir)/gtk/stock-icons/stock_about_24.png
HTML_IMAGES=

# Extra SGML files that are included by $(DOC_MAIN_SGML_FILE).
# e.g. content_files=running.sgml building.sgml changes-2.0.sgml
content_files=version.xml

# SGML files where gtk-doc abbrevations (#GtkWidget) are expanded
# These files must be listed here *and* in content_files
# e.g. expand_content_files=running.sgml
expand_content_files=

# CFLAGS and LDFLAGS for compiling gtkdoc-scangobj with your library.
# Only needed if you are using gtkdoc-scangobj to dynamically query widget
# signals and properties.
# e.g. AM_CPPFLAGS=-I$(top_srcdir) -I$(top_builddir) $(GTK_DEBUG_FLAGS)
# e.g. GTKDOC_LIBS=$(top_builddir)/gtk/$(gtktargetlib)
AM_CPPFLAGS=								\
	-I$(top_srcdir)							\
	-I$(top_builddir)						\
	$(BRASERO_GLIB_CFLAGS)						\
	$(BRASERO_IO_CFLAGS)						\
	$(BRASERO_GTK_CFLAGS)

GTKDOC_LIBS=$(top_builddir)/libbrasero-media/libbrasero-media3.la

# This includes the standard gtk-doc make rules, copied by gtkdocize.
include $(top_srcdir)/gtk-doc.make

# Other files to distribute
# e.g. EXTRA_DIST += version.xml.in
EXTRA_DIST += version.xml.in

# Files not to distribute
# for --rebuild-types in $(SCAN_OPTIONS), e.g. $(DOC_MODULE).types
# for --rebuild-sections in $(SCAN_OPTIONS) e.g. $(DOC_MODULE)-sections.txt
#DISTCLEANFILES +=

# Comment this out if you want your docs-status tested during 'make check'
#TESTS = $(GTKDOC_CHECK)



-include $(top_srcdir)/git.mk
