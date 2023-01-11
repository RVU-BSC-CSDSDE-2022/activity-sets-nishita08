#include <stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

int main () {
  int n,result;
  n = input_number();
  result = is_composite(n);
  output(n,result);
  return 0;
}

int input_number() {
  int x;
  printf("Enter a number\n");
  scanf("%d",&x);
  return x;
}

int is_composite(int n) {
  int check,i,count;
  count = 0;
  check = 0;
  for(i=1; i<=n; i++) {
    if(n%i==0) {
      count = count + 1;
    }
  }
  if (count>2) {
    check = 1;
  }
  return check;
}

void output(int n, int result) {
  if(result==1) {
    printf("%d is a composite number.\n",n,result);
  }
  else
    printf("%d is not a composite number.\n",n,result);
}