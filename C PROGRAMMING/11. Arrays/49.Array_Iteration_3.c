#include<stdio.h>
int main()
{
  int marks[5];

  for(int i=0;i<5;i++)
  {
    printf("Enter Marks of student %d is:",i+1);
    scanf("%d",&marks[i]);
  }
  for(int i=0;i<5;i++)
  {
    printf("marks of student %d are:%d\n",(i+1),marks[i]);
  }
  return 0;
}