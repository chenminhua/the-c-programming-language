Key of chapter 1：

## printf

```
"%d"           int
"%ld"          long
"%f" "%2.5f"   float
"%s"           c-style string
```

## pass arguments

**In C, all function arguments are passed "by value"**.

**Call by value is an asset, however, not a liability.** It usually leads to more compact programs with fewer extraneous variables, because parameters can be treated as conveniently initialized local variables in the called routine.

When necessary, it is possible to arrange for a function to modify a variable in a calling routine. The caller must provide the address of the variable to be set (a pointer), and the called function must declare the parameter to be a pointer and access the variable indirectly through it.

**The story is different for arrays**, when the name of an array is used as an argument, the value passed to the function is the address of the beginning of the array--there is no copying of array elements.'
(传数组的时候，传的是数组的首地址，而不是整个拷贝)

## c-style string

when you see a string like "hello\n", there is 7 characters.

```
"hello\n" -> 'h', 'e', 'l', 'l', 'o', '\n', '\0'
```

## externel variables and scope

An externel variable must be defined, exactly once, outside of any function. (This sets aside storage for it.)

If you want to access the variable in any function, you have to declared it in this function. The declaration may be an explicit extern statement or may be implicit from context.

https://zhuanlan.zhihu.com/p/27586298

```
1. 函数和变量的声明不会分配内存, 但是定义会分配相应的内存空间
2. 函数和变量的声明可以有很多次, 但是定义最多只能有一次
3. 函数的声明和定义方式默认都是 extern 的, 即函数默认是全局的
4. 变量的声明和定义方式默认都是局部的, 在当前编译单元或者文件内可用
```

函数默认都是 extern 的，即下面两种写法是一样的

```
int add(int a, int b);
extern int add(int a, int b);
```

而加了 static 修饰的函数表明这个函数只在这个文件中可见。

```
static int add(int a, int b);
```

关于变量

```
extern         静态（程序结束后释放）       外部（整个程序）
static	       静态（程序结束后释放）       内部（仅编译单元，一般指单个源文件）
auto,register : 函数调用（调用结束后释放）   无
```
