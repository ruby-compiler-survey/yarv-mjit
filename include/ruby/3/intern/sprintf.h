/**                                                     \noop-*-C++-*-vi:ft=cpp
 * @file
 * @author     Ruby developers <ruby-core@ruby-lang.org>
 * @copyright  This  file  is   a  part  of  the   programming  language  Ruby.
 *             Permission  is hereby  granted,  to  either redistribute  and/or
 *             modify this file, provided that  the conditions mentioned in the
 *             file COPYING are met.  Consult the file for details.
 * @warning    Symbols   prefixed   with   either  `RUBY3`   or   `ruby3`   are
 *             implementation details.   Don't take  them as canon.  They could
 *             rapidly appear then vanish.  The name (path) of this header file
 *             is also an  implementation detail.  Do not expect  it to persist
 *             at the place it is now.  Developers are free to move it anywhere
 *             anytime at will.
 * @note       To  ruby-core:  remember  that   this  header  can  be  possibly
 *             recursively included  from extension  libraries written  in C++.
 *             Do not  expect for  instance `__VA_ARGS__` is  always available.
 *             We assume C99  for ruby itself but we don't  assume languages of
 *             extension libraries. They could be written in C++98.
 * @brief      Our own private printf(3).
 */
#ifndef  RUBY3_INTERN_SPRINTF_H
#define  RUBY3_INTERN_SPRINTF_H
#include "ruby/3/attr/format.h"
#include "ruby/3/dllexport.h"
#include "ruby/3/value.h"

RUBY3_SYMBOL_EXPORT_BEGIN()

/* sprintf.c */
VALUE rb_f_sprintf(int, const VALUE*);

RUBY3_ATTR_FORMAT(RUBY3_PRINTF_FORMAT, 1, 2)
VALUE rb_sprintf(const char*, ...);
VALUE rb_vsprintf(const char*, va_list);

RUBY3_ATTR_FORMAT(RUBY3_PRINTF_FORMAT, 2, 3)
VALUE rb_str_catf(VALUE, const char*, ...);
VALUE rb_str_vcatf(VALUE, const char*, va_list);
VALUE rb_str_format(int, const VALUE *, VALUE);

RUBY3_SYMBOL_EXPORT_END()

#endif /* RUBY3_INTERN_SPRINTF_H */
