#include <stdio.h>

static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

static char *name[] = {
    "Illegal month",
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"};

int day_of_year(int year, int montn, int day)
{
  int i, leap;

  leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
  if (leap)
  {
    return 366;
  }
  else
  {
    return 365;
  }
}

char *month_name(int n)
{
  return (n < 1 || n > 12) ? name[0] : name[n];
}
