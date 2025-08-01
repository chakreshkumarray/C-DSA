#include<stdio.h>
int Factorial(int num)
{
 if(num==0){
  return 1;
 }
 return num*Factorial(num-1);
}

int main()
{
 int num;
 printf("Enter a number:");
 scanf("%d",&num);
 
 printf("Factorial of %d is : %d ",num,Factorial(num));
}