#include<stdio.h>
int main()
{
  int num= 5;
  for(int i=0;i<num;i++){
    for(int j=0;j<num-i;j++){
      if(j==0||j==num-i-1||i==0)
      printf("* ");
      else
      printf(" ");
    }
    printf("\n");
  }
  return 0;
}