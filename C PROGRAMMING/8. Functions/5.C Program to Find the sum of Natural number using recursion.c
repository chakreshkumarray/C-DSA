#include<stdio.h>
int NaturalNumber(int num)
{
  if(num<=1){
    return num;
  }
 return num+NaturalNumber(num-1);
}

int main()
{
 int num;
 printf("Enter a number:");
 scanf("%d",&num);
 printf("%d",NaturalNumber(num));

 return 0;
}