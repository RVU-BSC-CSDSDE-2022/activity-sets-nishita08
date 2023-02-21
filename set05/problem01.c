#include <stdio.h>
#include <math.h>

struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main ()
{
  Point a,b;
  float res;
  a = input();
  b = input();
  dist(a,b,&res);
  output(a,b,res);
  return 0;
  
}

Point input()
{
  Point num;
  printf("Enter the points\n");
  scanf("%f%f",&num.x,&num.y);
  return num;
}

void dist(Point a, Point b, float *res)
{
  float distx,disty,distance;
  distx = (b.x-a.x)*(b.x-a.x);
  disty = (b.y-a.y)*(b.y-a.y);
  distance = distx + *res = sqrt(distance);
}

void output(Point a, Point b, float res)
{
  printf("The distance between (%.2f,%.2f) and (%.2f,%.2f) is %f\n",a.x,b.x,a.y,b.y,res);
}