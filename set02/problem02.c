#include <stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main() {
  int a,b,c,isscalene;
  a = input_side();
  b = input_side();
  c = input_side();
  isscalene = check_scalene(a,b,c);
  output(a,b,c,isscalene);
}

int input_side() {
  int x;
  printf("Enter the side of triangle\n");
  scanf("%d",&x);
  return x;
}

int check_scalene(int a, int b, int c) {
 
  
void output(int a, int b, int c, int isscalene) {
  printf("The triangle with sides %d, %d and %d is not scalene.\n",a,b,c,isscalene);
}