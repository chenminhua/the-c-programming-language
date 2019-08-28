## switch case

```
switch (exp) {
  case const-expr: statements
  case const-expr: statements
  default: statements
}
```

## loops

```
while(exp) {
  ...
}

for (;;) {}

do {
  statement
} while (exp);
```

## goto

```
goto error;

error:
  clean up the mess
```

With a few exceptions like those cited here, code that relies on qoto statements is generally harder to understand and to maintain than code without gotos.

Although we are not dogmatic about the matter, it does seem that **goto statements should be used rarely**,if at all.
