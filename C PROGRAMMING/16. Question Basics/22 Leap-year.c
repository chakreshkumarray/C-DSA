#include<stdio.h>
int main()
{
  int year;
  printf("Enter the Year:");
  scanf("%d",&year);

  if (year % 400==0)
  {
    printf("This is a leap year");
  }
  else if (year % 100==0)
  {
    printf("This is not a leap year");
  }
  else if (year % 4==0)
  {
    printf("This is a leap year");
  }
  else
  {
    printf("This is not a leap year");
  }
  return 0;
}