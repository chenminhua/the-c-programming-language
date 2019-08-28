/**
 * @ Author: Chen Minhua
 * @ Create Time: 2019-08-28 21:51:39
 * @ Modified by: Your name
 * @ Modified time: 2019-08-28 21:54:03
 * @ Description: count stdin characters
 */

#include <stdio.h>

int main()
{
  long nc;
  nc = 0;
  while (getchar() != EOF)
    nc++;
  printf("number of characters %ld\n", nc);
}