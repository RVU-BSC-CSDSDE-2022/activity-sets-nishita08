#include <stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main () 
{
  float x1,y1,x2,y2,x3,y3,result;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  result = is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,result);
  return 0;
}

input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter x1 and y1\n");
  scanf("%f%f",x1,y1);
  printf("Enter x2 and y2\n");
  scanf("%f%f",x2,y2);
  printf("Enter x3 and y3\n");
  scanf("%f%f",x3,y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  int ans;
  float check;
  check = 0.5*(x1*(y2-y3)+x2*(y3-y2)+x3*(y1-y2));
  if(check==0)
  {
    ans = 0;
  }
  else
  {
   ans = 1;
  }
  return ans;
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
if (result==0)
{
  printf("The given points(%2.f,%2.f),(%2.f,%2.f) and (%2.f,%2.f) do not form a triangle.\n",x1,y1,x2,y2,x3,y3);
}
  else
{
  printf("The given points(%2.f,%2.f),(%2.f,%2.f) and (%2.f,%2.f) form a triangle.\n",x1,y1,x2,y2,x3,y3);
}
}