#include<stdio.h>
int main()
{
  int num=5;
  for(int i=0;i<num;i++){
    for(int j=0;j<i;j++){
      printf("%c ",j+'A');
    }
    printf("\n");
  }
  return 0;
}