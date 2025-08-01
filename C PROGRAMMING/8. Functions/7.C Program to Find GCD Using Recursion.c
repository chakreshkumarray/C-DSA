#include<stdio.h>
int GCD(int num1 , int num2)
{
  int result=((num1<num2)?num1:num2);
  while (num1>0)
  {
    if(num1%result==0&&num2%result==0)
    {
      break;
    }
    result--;
  }
  return result;
  
}

int main()
{
  int num1, num2;
  printf("Enter first number:");
  scanf("%d",&num1);
  printf("Enter Second Number:");
  scanf("%d",&num2);

  printf("GCD of %d and %d is : %d  ",num1, num2,GCD(num1,num2));
}
