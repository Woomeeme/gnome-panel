#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.menu"), aligned (sizeof(void *) > 8 ? sizeof(void *) : 8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[685]; const double alignment; void * const ptr;}  menu_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\000\001\000\000\000\000\000\050\010\000\000\000"
  "\000\000\000\000\001\000\000\000\001\000\000\000\003\000\000\000"
  "\006\000\000\000\007\000\000\000\007\000\000\000\010\000\000\000"
  "\260\267\044\060\004\000\000\000\000\001\000\000\006\000\114\000"
  "\010\001\000\000\014\001\000\000\322\005\350\052\000\000\000\000"
  "\014\001\000\000\014\000\114\000\030\001\000\000\034\001\000\000"
  "\272\272\177\171\001\000\000\000\034\001\000\000\010\000\114\000"
  "\044\001\000\000\050\001\000\000\203\251\176\033\007\000\000\000"
  "\050\001\000\000\020\000\166\000\070\001\000\000\327\001\000\000"
  "\113\120\220\013\006\000\000\000\327\001\000\000\004\000\114\000"
  "\334\001\000\000\340\001\000\000\223\075\033\260\007\000\000\000"
  "\340\001\000\000\021\000\166\000\370\001\000\000\227\002\000\000"
  "\324\265\002\000\377\377\377\377\227\002\000\000\001\000\114\000"
  "\230\002\000\000\234\002\000\000\136\063\061\332\002\000\000\000"
  "\234\002\000\000\005\000\114\000\244\002\000\000\254\002\000\000"
  "\147\156\157\155\145\057\000\000\001\000\000\000\147\156\157\155"
  "\145\055\160\141\156\145\154\057\002\000\000\000\155\157\144\165"
  "\154\145\163\057\007\000\000\000\155\145\156\165\055\142\141\162"
  "\055\155\145\156\165\056\165\151\003\001\000\000\001\000\000\000"
  "\170\332\175\117\061\016\302\060\014\334\373\212\310\173\311\007"
  "\334\154\214\274\001\071\255\221\054\045\101\112\334\201\337\343"
  "\264\052\145\100\154\167\076\337\371\214\122\224\353\203\146\016"
  "\203\163\230\271\254\116\226\011\072\030\043\325\261\003\350\232"
  "\251\215\147\225\147\331\231\161\121\316\007\061\112\252\125\342"
  "\252\354\012\145\236\040\121\344\004\116\053\225\226\110\051\046"
  "\033\276\270\101\270\137\027\121\167\263\350\206\376\143\373\023"
  "\105\333\141\010\107\255\013\133\300\326\355\127\000\372\263\031"
  "\372\257\326\350\273\045\014\266\160\276\375\006\072\273\121\100"
  "\000\050\165\165\141\171\051\157\162\147\057\000\000\000\000\000"
  "\155\141\151\156\055\155\145\156\165\055\155\145\156\165\056\165"
  "\151\000\000\000\000\000\000\000\005\001\000\000\001\000\000\000"
  "\170\332\175\217\075\016\302\060\014\205\367\236\042\312\016\271"
  "\200\233\215\221\063\040\247\065\222\245\304\110\211\073\160\173"
  "\234\040\132\006\304\142\371\363\317\363\063\260\050\325\073\056"
  "\024\047\347\240\220\154\216\327\331\027\144\071\165\032\301\367"
  "\246\265\033\055\312\017\171\223\061\053\225\017\030\242\152\345"
  "\264\051\071\301\102\263\317\230\050\173\247\025\245\145\124\114"
  "\331\212\117\152\076\336\056\053\253\273\232\164\203\260\257\375"
  "\221\302\161\330\307\335\327\231\114\141\144\277\024\040\034\326"
  "\040\174\331\206\320\127\342\144\003\307\343\057\005\076\122\040"
  "\000\050\165\165\141\171\051\057\004\000\000\000\155\145\156\165"
  "\057\000\000\000\005\000\000\000\003\000\000\000" };

static GStaticResource static_resource = { menu_resource_data.data, sizeof (menu_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };

G_MODULE_EXPORT
GResource *menu_get_resource (void);
GResource *menu_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/* GLIB - Library of useful routines for C programming
 * Copyright (C) 1995-1997  Peter Mattis, Spencer Kimball and Josh MacDonald
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

/*
 * Modified by the GLib Team and others 1997-2000.  See the AUTHORS
 * file for a list of people on the GLib Team.  See the ChangeLog
 * files for a list of changes.  These files are distributed with
 * GLib at ftp://ftp.gtk.org/pub/gtk/.
 */

#ifndef __G_CONSTRUCTOR_H__
#define __G_CONSTRUCTOR_H__

/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a usable way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER)

/*
 * Only try to include gslist.h if not already included via glib.h,
 * so that items using gconstructor.h outside of GLib (such as
 * GResources) continue to build properly.
 */
#ifndef __G_LIB_H__
#include "gslist.h"
#endif

#include <stdlib.h>

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for x86 and x64/ARM/ARM64 programs, as symbols on x86 are prefixed
 * with an underscore but symbols on x64/ARM/ARM64 are not.
 */
#ifdef _M_IX86
#define G_MSVC_SYMBOL_PREFIX "_"
#else
#define G_MSVC_SYMBOL_PREFIX ""
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */
#endif /* __G_CONSTRUCTOR_H__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(menuresource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(menuresource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(menuresource_destructor)
#endif
G_DEFINE_DESTRUCTOR(menuresource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void menuresource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void menuresource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
