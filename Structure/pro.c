#include <stdio.h>

struct Circle {
  int x;
  int y;
  double r;
  double p;
  double a;
};

int main() {
  struct Circle c;
  c.x = 10;
  c.y = 10;
  c.r = 5;
  
  c.p = c.r*c.r*3.14;
  c.a = 2*c.r*3.14;

  printf("circle's position, render, area, circumference : %d, %d, %lf, %lf, %lf\n", c.x, c.y, c.r, c.p, c.a);
  
  return 0;
}