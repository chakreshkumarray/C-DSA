#include<stdio.h>
int sum(int num)
{
 if(num==0){
  return 1;
 }
 for(int i=2;i<num;i++){
  if(num%i==0){
    printf("No...\n");
    return 0;
  }
 }
 printf("Yes..\n");
}

int main()
{
  int num=16;
  printf("prime is..",sum(num));
  
}