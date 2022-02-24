#include<stdio.h>
#include<math.h>
int input_number()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  return a;
}
int is_prime(int n)
{
 for (int i=2;i<=sqrt(n);i++)
   if((n%i)==0)
     return 0;
  
  return 1;
}
void output(int n,int is_prime)
{
  if(is_prime==0)
    printf("it is a prime number\n");
  else 
    printf("it is not a prime number\n");
}
int main()
{
  int a,result;
  input_number(a);
  result=is_prime(a);
  output(a,result);
  return 0;
}