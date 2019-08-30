#include <stdio.h>
#include <math.h>
#include "graphics.h"

struct point makepoint(int x, int y)
{
  struct point temp;
  temp.x = x;
  temp.y = y;
  return temp;
}

double calulate_distance(struct point *p1, struct point *p2)
{
  return sqrt(pow(p1->x - p2->x, 2) + pow(p1->y - p2->y, 2));
}

int main()
{
  struct point p1 = {320, 320};
  struct point p2 = {0, 0};
  printf("sizeof(struct point): %lu , sizeof(struct rect): %lu\n",
         sizeof(struct point), sizeof(struct rect));
  printf("p1: {%d, %d}, p2: {%d, %d}, distance %f\n",
         p1.x, p1.y, p2.x, p2.y, calulate_distance(&p1, &p2));
}
