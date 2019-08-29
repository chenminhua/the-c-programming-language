#include <stdio.h>

int main()
{
  int x = 1, y = 2;
  int *p;
  p = &x; /* p point to x */
  y = *p; /* now y = 1 */
  *p = 0; /* now x = 0 */
}