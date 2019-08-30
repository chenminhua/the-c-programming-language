/**
 * @ Author: Chen Minhua
 * @ Create Time: 2019-08-30 11:04:24
 * @ Modified by: Chen Minhua
 * @ Modified time: 2019-08-30 12:04:41
 * @ Description: pointers to pointers
 */

#include <stdio.h>
#include <string.h>

#define MAXLINES 5000

/* pointers to text lines
 lineptr is an array of MAXLINES elements, each element is a pointer to a char
 lineptr[i] is a character pointer, and *lineptr[i] is the character it points to */
char *lineptr[MAXLINES];

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(char *lineptr[], int left, int right);

int main()
{
  int nlines;
  if ((nlines = readlines(lineptr, MAXLINES)) >= 0)
  {
    qsort(lineptr, 0, nlines - 1);
    writelines(lineptr, nlines);
    return 0;
  }
  else
  {
    printf("error: input too big to sort\n");
    return 1;
  }
}

#define MAXLEN 1000
int getline(char *, int);
char *alloc(int);

int readlines(char *lineptr[], int maxlines)
{
  int len, nlines;
  char *p, line[MAXLEN];

  nlines = 0;
  while ((len = getline(line, MAXLEN)) > 0)
  {
    if (nlines >= maxlines || (p = alloc(len)) == NULL)
    {
      return -1;
    }
    else
    {
      line[len - 1] = '\0';
      strcpy(p, line);
      lineptr[nlines++] = p;
    }
  }
  return nlines;
}

void writelines(char *lineptr[], int nlines)
{
  int i;
  for (i = 0; i < nlines; i++)
  {
    printf("%s\n", lineptr[i]);
  }
}
