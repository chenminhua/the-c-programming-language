The functions and external variables that make up a C program need not all be compiled at the same time; the source text of the program may be kept in several files, and previously compiled routines may be loaded from libraries.

There is a tradeoff between the desire that each file have access only to the information it needs for its job and the practical reality that it's harder to maintain more header files.

## Register variables

advises the compiler that the variable in question will be heavily used.

The idea is that register variables are to be placed in machine registers.

## Recursion

qsort

## The C Preprocessor

C provides certain language facilities by means of a preprocessor, which is conceptually a separate first step in compilation.

用的最多的两个是 #include 和 #define

#### file inclusion

```
#include "filename"
或者
#include <filename>
```

include is the preferred way to **tie the declarations together for a large program**.

Naturally, when an included file is changed, all files that depend on it must be recompiled.

#### macro substitution

```
#define name replacement

#define max(A, B) ((A) > (B) ? (A) : (B))
```

#### conditional inclusion

```
#ifndef __FFF_H__
#define __FFF_H__

#endif
```
