#include<stdio.h>
int main()
{
  int n=5;
  for(int i=0;i<=2*(n-1);i++){
    for(int j=0;j<2*(i-n+1);j++){
    printf("* ");
    }
    printf("\n");
  }
  return 0;
}