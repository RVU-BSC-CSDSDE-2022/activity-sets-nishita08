#include <stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

int main () {
  int n,count,result;
  n = input_number();
  result = is_composite(n);
  output(n,result);
  return 0;
}

int input_number() {
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  return n;
}

int is_composite(int n) 
{
 int i, count=0;
  for(i=1;i<n/2;i++)
   if(n%i == 0){
     count = count+1;
   }
  return count;
  }

void output(int n, int result) {
  if(result==1)
    printf("%d is not a composite number\n",n,result);
  else
    printf("%d is a composite number\n",n,result);
} 
