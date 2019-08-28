## enum

```c
enum boolean {NO, YES};

enum months {JAN=1, FEB, MAR, APR, MAY, JUN,
            JUL, AUG, SEP, OCT, NOV, DEC}
```

默认 enum 中第一个的值为 0, the next 1, and so on, unless explicit values are specified.

**enum provide a convenient way to associate constant values with names.**

**enum is An alternative to #define**

## 优先级 Precedence and Order of Evaluation

```
() [] -> .
! ++ -- + - * & (type) sizeof
* / %
<< >>
< <= > >=
== !=
&
^
&&
?:
```
