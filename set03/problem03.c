 #include <stdio.h>
int input_number();
int is_prime(int n);
void output(int n, int result);

int main ()
{
  int n,result;
  n = input_number();
  result = is_prime(n);
  output(n,result);
  return 0;
}

int input_number() {
  int x;
  printf("Enter a number\n");
  scanf("%d",&x);
  return x;
}

int is_prime(int n) {
   int i,ans,count;
  ans =0;
  count =0;
  for(i=1; i<n; i++)
    {
      if(n%i==0)
      {
        count++;
      }
    }
  if(count>=2) {
    ans = 0;
  }
  else {
    ans = 1;
  }
  return ans;
}

void output(int n, int result)
{
  if (result==1)
  {
    printf("%d is a prime number\n",n,result);
  }
else {
  printf("%d is not prime number\n",n,result);
}
}