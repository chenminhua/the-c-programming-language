/**
 * @ Author: Chen Minhua
 * @ Create Time: 2019-08-28 22:00:20
 * @ Modified by: Chen Minhua
 * @ Modified time: 2019-08-28 22:09:32
 * @ Description: Count stdin lines, words, characters
 */

#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;

  while ((c = getchar()) != EOF)
  {
    nc++;
    if (c == '\n')
    {
      nl++;
    }
    if (c == ' ' || c == '\n' || c == '\t')
    {
      state = OUT;
    }
    else if (state == OUT)
    {
      state = IN;
      nw++;
    }
  }
  printf("lines %d, words %d, chars %d", nl, nw, nc);
}