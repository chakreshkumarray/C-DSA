#include<stdio.h>
int main(){
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  for(int i=0;i<=num;i++){
    for(int j=0;j<num-i-1;j++){
      printf("%d ",j+1);
    }
    printf("\n");
  }
  return 0;
}