A pointer is a variable that contains the address of a variable.

## pointers and function arguments

function is "call by value", so if you want to change something in function, pass it's pointer into function.

```c
void swap(int *px, int *py) {
  int temp;
  temp = *px;
  *px = *py;
  *py = temp;
}
```

## pointers and arrays

```c
int a[10];
int *pa;
pa = &a[0];
*pa 表示 a[0]
*(pa+i) 表示 a[i]，注意，这和 type or size of the variables 无关
```

指针++

```c
int strlen(char *s) {
  int n;
  for (n=0; *s != '\n'; s++) {
    n++;
  }
  return n;
}
```

## address arithmetic

If p is a pointer to some element of an array, then p++ increments p to point to the next element, and p += i increments it to point ith element.

C is consistent and regular in its approach to address arithmetic;
its integration of pointers, arrays, and address arithmetic is one of the strengths of the language.

## generic pointer

```
void *
```

## Pointers vs Multi-dim arrays

```c
int a[10][20];
int *b[10];
// both a[3][4] and b[3][4] are syntactically legal references to a single int.
```

a is a true two-dimensional array: 200 int-sized locations have been set aside.

For b, the definition only allocates 10 pointers and does not initialize them.

The important advantage of the pointer array is that the rows of the array may be different lengths.

## complicated declarations

```c

char **argv              // pointer to pointer to char
int (*daytab)[13]        // pointer to array[13] of int
int *daytab[13]          // array[13] of pointer to int
void *comp()             // function return (pointer to void)
void (*comp)()           // pointer to (function return void)
int *f();                // function returning pointer to int
int (*pf)();             // pointer to (function returning int)
char (*(*x())[])()       // x是一个函数，这个函数返回一个指向数组的指针，数组里存着的元素都是指针，这些指针指向返回char的函数
char (*(*x[3])())[5]     // x是个有三个元素的数组，每个元素都是指针，每个指针指向一个函数，每个函数返回一个pointer to array[5] of char
```
