#include<stdio.h>
int main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);

n%2== 0 ? :printf("The number is even.");
           printf("The number is odd.");


return 0;
}
//OR
//Create a program to check whether a given number is prime using for loop

#include<stdio.h>
int main()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  if(num%2==0)
  {
    printf("This is even number %d",num);
  }
  else
  {
    printf("This is odd %d",num); 
  }
  return 0;
}