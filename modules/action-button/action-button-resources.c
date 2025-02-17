#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.action_button"), aligned (sizeof(void *) > 8 ? sizeof(void *) : 8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[2165]; const double alignment; void * const ptr;}  action_button_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\000\001\000\000\000\000\000\050\010\000\000\000"
  "\000\000\000\000\003\000\000\000\003\000\000\000\005\000\000\000"
  "\007\000\000\000\010\000\000\000\010\000\000\000\010\000\000\000"
  "\160\172\221\040\004\000\000\000\000\001\000\000\016\000\114\000"
  "\020\001\000\000\030\001\000\000\260\267\044\060\005\000\000\000"
  "\030\001\000\000\006\000\114\000\040\001\000\000\044\001\000\000"
  "\170\367\004\275\000\000\000\000\044\001\000\000\026\000\166\000"
  "\100\001\000\000\010\002\000\000\322\005\350\052\001\000\000\000"
  "\010\002\000\000\014\000\114\000\024\002\000\000\030\002\000\000"
  "\272\272\177\171\003\000\000\000\030\002\000\000\010\000\114\000"
  "\040\002\000\000\044\002\000\000\113\120\220\013\007\000\000\000"
  "\044\002\000\000\004\000\114\000\050\002\000\000\054\002\000\000"
  "\253\205\314\200\000\000\000\000\054\002\000\000\023\000\166\000"
  "\100\002\000\000\156\010\000\000\324\265\002\000\377\377\377\377"
  "\156\010\000\000\001\000\114\000\160\010\000\000\164\010\000\000"
  "\141\143\164\151\157\156\055\142\165\164\164\157\156\057\000\000"
  "\002\000\000\000\006\000\000\000\147\156\157\155\145\057\000\000"
  "\003\000\000\000\147\160\055\154\157\143\153\055\163\143\162\145"
  "\145\156\055\155\145\156\165\056\165\151\000\000\000\000\000\000"
  "\152\002\000\000\001\000\000\000\170\332\255\222\061\016\302\060"
  "\014\105\367\236\042\312\136\162\201\020\211\235\001\211\003\040"
  "\067\030\051\042\115\253\330\255\304\355\161\133\001\031\120\207"
  "\302\226\157\377\374\377\006\333\220\030\363\015\074\272\112\051"
  "\333\142\032\124\270\356\165\354\374\275\046\237\021\123\075\015"
  "\365\264\026\003\241\347\320\245\105\211\016\214\355\113\210\004"
  "\346\034\232\201\121\045\150\121\142\240\301\250\025\147\110\024"
  "\201\241\211\062\174\040\151\167\071\112\203\072\317\015\326\274"
  "\377\255\144\301\334\254\135\201\266\053\336\137\102\254\051\361"
  "\176\140\075\110\365\010\342\134\170\011\106\314\333\241\151\065"
  "\344\157\320\247\334\365\230\071\040\155\107\355\327\062\112\122"
  "\153\212\313\260\146\072\031\127\211\341\163\135\117\102\243\306"
  "\207\000\050\165\165\141\171\051\147\156\157\155\145\055\160\141"
  "\156\145\154\057\004\000\000\000\155\157\144\165\154\145\163\057"
  "\000\000\000\000\157\162\147\057\001\000\000\000\160\141\156\145"
  "\154\055\162\165\156\055\144\151\141\154\157\147\056\165\151\000"
  "\125\072\000\000\001\000\000\000\170\332\355\133\113\157\333\070"
  "\020\276\367\127\160\171\135\310\251\122\264\050\012\133\105\232"
  "\155\213\005\012\054\320\244\273\107\201\226\306\026\327\064\245"
  "\045\351\107\376\375\222\224\237\265\144\211\224\335\070\101\156"
  "\061\305\031\316\174\034\316\213\114\377\343\162\312\320\034\204"
  "\244\071\037\340\260\367\032\043\340\111\236\122\076\036\340\037"
  "\367\137\202\367\370\143\364\252\377\133\020\240\257\300\101\020"
  "\005\051\132\120\225\241\061\043\051\240\067\275\360\175\357\015"
  "\012\002\075\211\162\005\142\104\022\210\136\041\324\027\360\337"
  "\214\012\220\210\321\341\000\217\325\344\167\274\135\110\223\135"
  "\343\053\073\057\037\376\013\211\102\011\043\122\016\360\127\065"
  "\371\203\022\226\217\061\242\351\000\027\204\003\213\305\214\307"
  "\151\071\152\110\064\121\041\362\002\204\172\100\234\114\141\200"
  "\023\302\343\121\236\314\044\216\276\020\046\241\177\265\236\120"
  "\075\177\230\213\024\104\274\240\251\312\160\364\266\151\272\242"
  "\212\001\106\112\020\056\031\121\144\310\364\340\003\350\325\276"
  "\317\070\272\051\012\106\023\242\264\142\115\214\026\224\247\371"
  "\042\056\162\111\315\164\034\045\140\060\153\134\377\241\200\070"
  "\323\360\342\250\204\341\200\040\311\050\113\221\335\000\116\130"
  "\140\177\016\360\174\230\057\127\210\125\001\375\111\177\265\050"
  "\227\114\003\063\075\334\314\077\024\143\116\045\325\252\343\350"
  "\136\314\016\040\366\331\226\052\232\134\120\215\011\051\341\321"
  "\366\242\064\264\254\015\241\054\110\242\255\026\107\327\225\263"
  "\055\044\333\337\107\361\230\022\312\343\135\354\074\361\360\305"
  "\304\303\144\073\303\171\024\322\167\265\024\007\260\066\100\253"
  "\205\021\017\025\330\172\343\333\005\343\172\015\252\265\270\141"
  "\164\314\247\132\205\122\027\262\376\031\342\052\372\016\012\165"
  "\125\252\212\176\151\305\305\321\153\127\302\007\137\302\245\324"
  "\266\006\076\053\266\046\254\335\274\352\015\374\163\112\306\120"
  "\156\036\115\162\036\027\164\071\045\005\256\143\320\161\007\117"
  "\261\213\235\166\262\323\156\126\072\004\225\047\023\034\351\140"
  "\036\114\251\224\332\067\004\324\100\332\212\127\165\214\042\111"
  "\002\162\005\152\055\355\301\136\336\250\311\137\166\340\140\063"
  "\003\242\046\345\334\243\374\016\165\333\260\374\360\141\053\123"
  "\140\276\125\106\376\333\174\072\045\134\353\223\034\206\375\156"
  "\113\246\040\023\101\013\353\262\253\126\276\317\300\256\212\362"
  "\021\122\372\357\144\045\211\312\321\020\220\316\225\172\355\344"
  "\351\137\225\070\035\331\262\253\343\347\353\050\203\043\304\307"
  "\010\373\072\346\114\264\141\265\363\024\260\324\031\142\352\351"
  "\021\107\224\061\117\322\202\244\251\215\214\241\263\163\333\046"
  "\177\015\244\372\153\035\024\265\330\272\104\263\115\114\066\171"
  "\337\365\123\010\141\116\311\214\177\122\343\033\135\264\113\030"
  "\346\032\325\173\130\256\374\122\142\106\064\272\066\353\171\152"
  "\141\046\043\062\136\011\336\132\214\152\037\337\244\176\025\230"
  "\237\055\315\036\212\112\343\032\130\136\241\243\157\337\201\243"
  "\255\052\147\367\217\115\256\356\230\273\363\065\213\322\343\371"
  "\122\267\366\134\015\336\253\021\072\327\203\267\361\144\331\021"
  "\117\166\261\347\154\343\220\302\353\366\147\314\355\060\335\146"
  "\220\114\076\315\224\062\051\205\001\112\237\317\051\325\047\064"
  "\116\314\227\352\162\354\230\314\214\014\201\325\166\104\050\107"
  "\361\172\005\337\334\310\171\153\116\166\356\017\331\010\110\200"
  "\316\101\306\051\214\310\214\051\207\315\256\142\067\223\020\317"
  "\270\256\346\031\345\035\025\164\052\005\252\030\244\202\054\142"
  "\312\123\323\300\312\205\243\060\235\062\372\346\254\376\300\110"
  "\133\347\366\247\113\266\357\200\031\001\125\106\045\322\022\230"
  "\044\133\147\330\173\171\267\266\166\202\326\262\242\262\305\327"
  "\153\213\141\233\060\323\042\324\264\145\324\034\162\116\021\166"
  "\272\207\236\316\341\247\105\010\152\005\253\217\267\335\165\264"
  "\132\155\210\207\345\300\051\135\254\155\301\307\206\173\257\327"
  "\173\361\261\047\365\261\147\166\153\073\046\361\010\016\355\226"
  "\321\144\262\362\147\126\006\333\067\020\371\102\002\032\345\102"
  "\273\062\043\037\132\144\271\036\060\013\231\357\244\050\240\354"
  "\060\354\072\076\251\204\076\134\317\323\325\165\062\076\207\306"
  "\102\263\263\013\177\225\263\173\276\345\112\170\316\162\345\364"
  "\315\054\237\326\112\173\250\274\141\162\357\107\325\101\123\017"
  "\213\367\161\364\303\303\053\305\250\301\241\022\203\266\367\143"
  "\237\255\236\040\312\010\301\250\124\061\254\207\176\315\105\231"
  "\053\351\112\274\026\346\352\325\223\324\354\306\202\114\143\013"
  "\105\175\175\172\121\355\311\171\227\003\174\341\275\315\273\104"
  "\344\214\101\372\217\055\157\312\075\222\253\261\262\344\011\037"
  "\251\357\342\313\102\146\304\274\305\060\157\053\160\104\371\271"
  "\132\057\367\002\340\157\012\213\103\263\306\117\067\131\237\237"
  "\242\042\314\200\150\367\046\343\215\142\156\011\123\165\226\056"
  "\155\275\116\033\253\255\272\255\272\333\320\227\055\010\075\064"
  "\327\273\027\154\370\206\345\263\245\116\351\353\371\153\214\135"
  "\073\073\103\221\121\173\053\372\115\257\147\356\045\047\074\137"
  "\160\123\066\254\137\106\311\213\254\022\136\032\370\227\321\300"
  "\377\126\366\072\366\054\327\016\275\274\314\350\334\055\132\165"
  "\060\311\336\161\064\245\274\361\153\210\052\211\166\132\006\075"
  "\237\265\027\302\274\241\361\216\303\126\076\342\260\167\347\073"
  "\226\336\033\357\130\361\137\134\251\332\360\240\000\231\054\151"
  "\155\144\355\062\371\235\043\155\311\336\274\274\221\163\074\267"
  "\131\276\100\154\057\236\306\056\001\265\163\107\324\331\132\116"
  "\127\356\273\026\243\135\253\375\360\024\325\176\225\372\325\252"
  "\373\250\355\256\262\163\364\257\120\365\100\315\332\304\325\160"
  "\216\211\000\202\033\036\131\333\246\363\317\117\317\167\350\303"
  "\107\175\165\335\366\075\363\316\025\217\346\235\000\253\277\344"
  "\151\177\344\343\133\313\312\305\206\037\243\365\143\110\067\267"
  "\064\256\304\036\367\074\235\074\331\243\367\040\235\311\116\354"
  "\226\374\214\332\374\313\315\051\054\372\373\214\077\153\163\066"
  "\217\344\236\314\131\360\355\073\034\357\065\154\115\245\261\323"
  "\160\306\053\314\365\253\214\262\234\200\164\257\332\311\305\317"
  "\057\066\166\177\332\047\205\150\104\201\245\275\213\115\211\176"
  "\275\367\271\276\214\244\310\351\277\244\074\262\042\055\313\252"
  "\011\014\074\165\317\245\102\337\134\152\037\231\275\217\375\062"
  "\035\012\026\064\035\203\222\033\212\275\141\044\100\026\272\016"
  "\320\322\004\357\160\264\227\205\364\257\366\246\066\063\170\213"
  "\243\355\061\256\244\376\151\320\012\265\125\241\177\265\363\317"
  "\237\377\003\220\121\360\266\000\050\165\165\141\171\051\057\000"
  "\005\000\000\000" };

static GStaticResource static_resource = { action_button_resource_data.data, sizeof (action_button_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };

G_MODULE_EXPORT
GResource *action_button_get_resource (void);
GResource *action_button_get_resource (void)
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
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(action_buttonresource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(action_buttonresource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(action_buttonresource_destructor)
#endif
G_DEFINE_DESTRUCTOR(action_buttonresource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void action_buttonresource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void action_buttonresource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
