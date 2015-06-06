#
# $Id: configure.ac 23 2015-06-05 15:44:57Z hnc $
#
# Heath Caldwell <hncaldwell@fastmail.com>
#

AC_INIT([wmstickynotes],[0.7],[Heath Caldwell <hncaldwell@fastmail.com>])
AM_INIT_AUTOMAKE
AC_CONFIG_HEADER([config.h])

AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_MAKE_SET

AC_LANG([C])
AC_PATH_XTRA
AC_HEADER_DIRENT
AC_HEADER_STDC

AM_PATH_GTK_2_0([2.4.0])
PKG_CHECK_MODULES(GTK, gdk-2.0 gtk+-2.0,,exit)
AC_SUBST(GTK_LIBS)
AC_SUBST(GTK_CFLAGS)

AC_C_CONST
AC_TYPE_PID_T
AC_HEADER_TIME

AC_FUNC_MALLOC
AC_FUNC_MEMCMP
AC_DIAGNOSE([obsolete],[your code may safely assume C89 semantics that RETSIGTYPE is void.
Remove this warning and the `AC_CACHE_CHECK' when you adjust the code.])dnl
AC_CACHE_CHECK([return type of signal handlers],[ac_cv_type_signal],[AC_COMPILE_IFELSE(
[AC_LANG_PROGRAM([#include <sys/types.h>
#include <signal.h>
],
		 [return *(signal (0, 0)) (0) == 1;])],
		   [ac_cv_type_signal=int],
		   [ac_cv_type_signal=void])])
AC_DEFINE_UNQUOTED([RETSIGTYPE],[$ac_cv_type_signal],[Define as the return type of signal handlers
		    (`int' or `void').])

AC_FUNC_STRFTIME
AC_CHECK_FUNCS([mkdir])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT

