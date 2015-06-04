#
# $Id: Makefile.am 21 2015-05-27 23:03:43Z hnc $
#
# Heath Caldwell <hncaldwell@gmail.com>
#

AM_CFLAGS = @GTK_CFLAGS@

AUTOMAKE_OPTIONS = gnu
bin_PROGRAMS = wmstickynotes
wmstickynotes_SOURCES = wmstickynotes.c wmstickynotes.h wmstickynotes.xpm delete_button.xpm resize_button.xpm

wmstickynotes_LDADD = @GTK_LIBS@ -lX11
EXTRA_DIST = THANKS

dist_man_MANS = wmstickynotes.1
