#include <stdio.h>
#include <string.h>
void input(char *name);
int has_nice_name(char *c);
void output(int res);

int main ()
{
  char name [100];
  int res;
  input(name);
  res = has_nice_name(name);
  output(res);
  return 0;
}

void input(char *name)
{
  printf("Enter the name of the camel\n");
  scanf("%s",name);
}

int has_nice_name(char *c)
{
  int count = 0;
  int coun1 = 0;
  for(int i=0; i<strlen(c); i++)
    {
      if(c[i] == 'a' || c[i] == 'e' || c[i] == 'o' || c[i] == 'i' || c[i] == 'u')
      {
        count++;
        }
      else
      {
        count1++;
      }
    }

int res;
if(count>=2 && count1>=2)
{
  res = 1;
}
else {
  res = 0;
}
retuen res;
  }

void output(int res)
{
  if(res==1)
  {
    printf("The camel has a nice nae\n");
  }
  else
  {
    printf("The camel does not have a nice name\n");
  }
}