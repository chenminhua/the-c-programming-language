#ifndef __CMHGRAPHICS_H__
#define __CMHGRAPHICS_H__
struct point
{
  int x;
  int y;
};

struct rect
{
  struct point p1;
  struct point p2;
};
#endif

struct point makepoint(int x, int y);

double calulate_distance(struct point *p1, struct point *p2);