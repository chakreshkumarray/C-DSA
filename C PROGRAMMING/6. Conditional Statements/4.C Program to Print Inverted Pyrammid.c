#include<stdio.h>
int main(){
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  for(int i=0;i<=num;i++){
    for(int j=0;j<2*(num-i-1);j++){
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}