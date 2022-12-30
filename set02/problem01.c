#include <stdio.h>
void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main() {
  float base,height;
  input(base,height);
}

void input(float base, float height) {
  printf("Enter base\n");
  scanf("%f",&base);
  printf("Enter height\n");
  scanf("%f",&height);
  float area;
  find_area(base,height,&area);
  output(base,height,area);
}

void find_area(float base , float height, float *area) {
  *area = 0.5*base*height;
}

void output(float base, float height, float area) {
  printf("The area of triangle with base %f and height %f is %f\n",base,height,area);
}