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
