/**
 * @ Author: Chen Minhua
 * @ Create Time: 2019-08-28 21:46:40
 * @ Modified by: Your name
 * @ Modified time: 2019-08-28 21:51:19
 * @ Description: copy stdin to stdout
 *  filecopy < src > dest
 */

#include <stdio.h>

int main()
{
  int c;
  while ((c = getchar()) != EOF)
    putchar(c);
}