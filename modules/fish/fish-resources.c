#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.fish"), aligned (sizeof(void *) > 8 ? sizeof(void *) : 8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[2053]; const double alignment; void * const ptr;}  fish_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\000\001\000\000\000\000\000\050\010\000\000\000"
  "\000\000\000\000\001\000\000\000\001\000\000\000\001\000\000\000"
  "\003\000\000\000\005\000\000\000\007\000\000\000\007\000\000\000"
  "\260\267\044\060\001\000\000\000\000\001\000\000\006\000\114\000"
  "\010\001\000\000\014\001\000\000\113\120\220\013\003\000\000\000"
  "\014\001\000\000\004\000\114\000\020\001\000\000\024\001\000\000"
  "\223\034\234\002\005\000\000\000\024\001\000\000\007\000\166\000"
  "\040\001\000\000\057\007\000\000\324\265\002\000\377\377\377\377"
  "\057\007\000\000\001\000\114\000\060\007\000\000\064\007\000\000"
  "\104\237\231\330\007\000\000\000\064\007\000\000\007\000\114\000"
  "\074\007\000\000\100\007\000\000\275\027\205\252\004\000\000\000"
  "\100\007\000\000\005\000\114\000\110\007\000\000\120\007\000\000"
  "\365\025\023\126\005\000\000\000\120\007\000\000\014\000\166\000"
  "\140\007\000\000\372\007\000\000\157\330\366\224\000\000\000\000"
  "\372\007\000\000\006\000\114\000\000\010\000\000\004\010\000\000"
  "\147\156\157\155\145\057\000\000\007\000\000\000\157\162\147\057"
  "\000\000\000\000\146\151\163\150\056\165\151\000\000\000\000\000"
  "\233\120\000\000\001\000\000\000\170\332\355\134\113\163\333\066"
  "\020\276\347\127\240\270\166\144\231\162\035\073\031\211\231\324"
  "\155\322\103\247\223\151\335\063\007\042\127\022\042\010\140\001"
  "\320\217\137\221\143\377\137\177\111\101\322\017\312\242\370\000"
  "\050\133\162\350\233\251\335\045\366\303\276\200\005\061\376\160"
  "\263\142\350\012\244\242\202\117\260\167\164\214\021\360\120\104"
  "\224\317\047\370\357\313\117\203\163\374\301\177\063\376\141\060"
  "\100\237\201\203\044\032\042\164\115\365\002\315\031\211\000\235"
  "\034\171\347\107\047\150\060\060\104\224\153\220\063\022\202\377"
  "\006\241\261\204\177\022\052\101\041\106\247\023\074\327\313\037"
  "\361\343\213\014\333\010\017\063\072\061\375\012\241\106\041\043"
  "\112\115\360\147\275\374\030\175\115\224\136\001\327\030\321\150"
  "\202\311\303\377\036\116\071\014\117\054\105\014\122\337\042\116"
  "\126\060\301\114\134\203\304\276\067\036\336\377\120\116\227\304"
  "\161\112\067\072\075\255\243\274\042\054\001\354\237\324\321\051"
  "\015\161\100\171\050\041\033\157\375\020\142\062\207\042\303\223"
  "\221\214\207\071\034\155\221\031\125\043\163\174\344\035\257\377"
  "\065\305\312\073\156\010\225\327\026\052\213\061\075\005\317\153"
  "\003\336\057\224\060\061\317\201\233\121\265\010\142\011\063\220"
  "\306\332\101\005\121\376\143\371\153\103\302\203\231\010\023\205"
  "\375\117\204\051\250\033\346\124\310\010\144\160\115\043\275\330"
  "\230\341\115\162\115\065\003\214\264\044\134\061\242\311\224\231"
  "\207\267\220\276\315\014\023\175\171\034\146\255\244\333\030\202"
  "\005\115\241\311\025\332\140\010\027\224\105\050\163\124\116\330"
  "\040\373\327\114\341\124\334\334\351\136\206\334\317\346\327\014"
  "\266\134\350\040\045\037\075\320\227\130\004\125\324\050\201\375"
  "\113\231\154\200\145\003\160\031\217\220\324\330\000\321\046\234"
  "\140\337\304\025\115\103\302\232\060\252\230\204\046\272\231\060"
  "\120\112\135\216\020\011\323\027\005\104\002\051\050\136\012\126"
  "\242\265\340\117\041\053\360\217\326\004\130\240\147\213\340\243"
  "\172\353\317\266\153\221\253\260\000\026\007\323\374\301\123\316"
  "\222\210\103\246\300\112\255\071\370\315\010\332\066\060\153\044"
  "\152\320\260\141\215\140\106\022\246\333\063\113\010\201\136\245"
  "\341\344\136\102\345\144\224\206\135\005\101\302\115\370\140\224"
  "\327\152\136\014\170\353\102\111\270\064\066\136\377\072\270\211"
  "\011\217\054\306\071\243\214\131\260\305\102\321\334\145\217\253"
  "\324\052\035\377\170\130\142\274\066\006\035\011\016\235\030\364"
  "\005\023\355\324\077\070\213\136\020\325\273\303\163\270\203\327"
  "\205\073\224\001\120\256\274\225\342\026\112\157\126\160\341\062"
  "\110\313\024\354\003\217\032\163\325\105\215\022\210\066\340\331"
  "\214\024\025\225\116\132\342\234\276\150\242\156\127\123\072\127"
  "\111\225\225\222\167\356\134\117\024\201\175\213\237\047\122\266"
  "\166\307\126\150\125\042\366\266\222\253\024\264\162\340\176\317"
  "\263\117\012\135\226\210\274\023\134\306\350\000\240\053\210\145"
  "\374\067\204\321\171\165\222\157\233\154\363\335\007\126\053\220"
  "\150\055\251\111\356\240\312\011\212\044\167\057\275\006\072\137"
  "\230\045\165\266\222\115\135\215\105\371\336\104\011\357\260\132"
  "\376\266\024\124\235\206\234\122\221\103\072\262\256\320\052\322"
  "\322\326\112\255\255\345\077\204\214\305\226\220\361\362\126\277"
  "\125\233\206\276\274\115\053\147\315\272\320\156\273\173\372\167"
  "\323\137\303\136\345\013\365\376\340\354\023\216\176\341\344\033"
  "\065\376\121\351\043\066\226\265\226\136\317\016\315\252\132\247"
  "\135\267\364\333\014\344\032\240\323\027\006\305\155\263\035\341"
  "\335\025\346\325\365\335\250\261\210\132\314\152\103\137\206\334"
  "\135\040\251\221\323\021\176\135\142\350\124\355\130\156\063\374"
  "\141\010\220\230\241\164\327\372\275\313\073\322\325\364\212\310"
  "\145\022\273\003\330\152\145\136\057\156\305\141\045\070\015\323"
  "\025\316\034\064\366\063\063\061\141\101\336\066\027\133\227\161"
  "\232\147\236\316\062\120\107\231\250\223\214\324\060\063\065\312"
  "\120\256\001\341\327\164\146\013\001\041\233\351\075\011\010\256"
  "\242\322\315\376\053\242\241\305\326\331\113\331\261\253\252\271"
  "\031\273\112\151\264\015\266\073\053\156\002\167\063\250\273\200"
  "\331\035\142\347\040\321\000\332\132\130\235\252\253\120\254\126"
  "\006\270\276\300\262\051\260\356\301\353\153\254\346\065\326\205"
  "\010\062\320\220\026\110\046\034\135\057\200\033\164\151\270\204"
  "\350\375\076\227\111\367\223\335\127\112\337\101\245\264\066\331"
  "\175\261\324\027\113\175\261\264\303\142\311\173\256\142\151\167"
  "\033\245\266\273\172\355\140\164\202\320\176\233\264\373\136\213"
  "\115\323\240\071\124\326\060\265\357\264\164\167\022\242\155\373"
  "\265\031\034\373\163\054\250\270\161\176\336\367\245\333\167\347"
  "\014\156\336\041\264\244\037\327\142\336\316\373\172\243\103\353"
  "\300\264\132\135\065\137\125\175\344\164\225\131\155\243\045\124"
  "\203\326\275\153\373\276\111\013\277\157\135\076\153\353\362\102"
  "\254\246\302\104\223\113\270\271\373\252\301\330\314\034\202\060"
  "\175\156\202\213\116\237\357\265\073\365\345\333\236\224\157\016"
  "\107\145\334\352\267\175\072\051\163\366\052\117\312\234\035\346"
  "\111\231\262\244\330\037\236\331\347\303\063\357\372\303\063\273"
  "\077\074\243\142\200\276\271\143\325\334\311\241\353\133\073\055"
  "\216\317\174\041\211\002\144\210\321\114\032\332\275\156\347\344"
  "\323\253\142\312\373\136\316\053\354\345\374\145\046\266\370\045"
  "\332\343\164\277\222\156\016\345\167\243\012\302\005\221\330\377"
  "\357\337\157\116\315\241\307\017\336\375\302\307\356\116\312\062"
  "\272\232\006\351\075\006\305\117\320\275\237\336\271\010\215\350"
  "\234\152\325\252\043\263\051\204\047\053\220\064\334\337\376\327"
  "\376\271\277\167\130\356\277\221\307\215\046\272\117\346\055\222"
  "\271\202\120\360\110\365\335\341\172\337\030\275\316\356\260\123"
  "\315\156\021\200\366\240\077\154\267\332\272\130\100\270\366\331"
  "\273\024\146\231\010\201\026\363\171\032\065\336\164\343\221\301"
  "\237\231\130\044\070\272\137\175\042\063\123\300\224\055\302\135"
  "\257\362\134\304\130\174\302\276\243\345\303\326\100\173\164\152"
  "\053\042\222\344\072\240\074\062\163\246\205\154\063\234\357\311"
  "\315\117\372\143\040\375\061\220\376\030\310\363\036\003\071\334"
  "\353\060\332\134\006\121\253\157\375\275\026\353\072\256\375\070"
  "\316\057\235\032\344\173\113\017\275\356\365\307\110\202\212\005"
  "\127\146\064\003\317\303\176\341\262\247\361\160\215\262\236\377"
  "\024\373\205\253\165\112\331\237\074\124\353\327\266\215\207\205"
  "\053\004\377\007\047\304\022\351\000\050\165\165\141\171\051\057"
  "\001\000\000\000\141\160\160\154\145\164\057\000\005\000\000\000"
  "\146\151\163\150\057\000\000\000\006\000\000\000\002\000\000\000"
  "\146\151\163\150\055\155\145\156\165\056\165\151\000\000\000\000"
  "\366\000\000\000\001\000\000\000\170\332\165\117\313\016\303\040"
  "\014\073\217\257\100\271\157\375\001\312\067\354\027\002\163\065"
  "\044\140\023\244\207\375\375\170\110\355\251\067\333\211\023\333"
  "\204\054\050\033\173\130\245\265\111\310\273\016\257\225\266\120"
  "\337\367\316\250\353\155\122\341\045\174\262\125\267\101\203\040"
  "\065\074\011\213\224\340\166\201\316\234\260\122\144\207\110\132"
  "\012\347\032\131\330\305\046\376\120\311\076\013\066\024\144\217"
  "\152\226\303\166\171\210\307\117\262\075\315\343\173\345\035\326"
  "\145\046\232\370\010\333\111\157\141\125\133\070\233\376\001\227"
  "\166\116\030\000\050\165\165\141\171\051\160\141\156\145\154\057"
  "\004\000\000\000" };

static GStaticResource static_resource = { fish_resource_data.data, sizeof (fish_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };

G_MODULE_EXPORT
GResource *fish_get_resource (void);
GResource *fish_get_resource (void)
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
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(fishresource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(fishresource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(fishresource_destructor)
#endif
G_DEFINE_DESTRUCTOR(fishresource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void fishresource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void fishresource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
