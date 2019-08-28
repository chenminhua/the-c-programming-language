/**
 * @ Author: Chen Minhua 
 * @ Create Time: 2019-08-28 21:57:12
 * @ Modified by: Your name
 * @ Modified time: 2019-08-28 22:00:07
 * @ Description: count stdin lines
 */
#include <stdio.h>

int main()
{
  int c, nl;
  nl = 0;
  while ((c = getchar()) != EOF)
  {
    if (c == '\n')
      nl++;
  }
  printf("%d\n", nl);
}
