#include<stdio.h> // Right Print Pyrammid
int main()
{
  int n1;
  printf("Enter a number:");
  scanf("%d",&n1);
  for(int i1=0;i1<n1;i1++){
    for(int j1=0;j1<=i1;j1++){
      printf("* ");
    }
    printf("\n");
  }
   return 0;
} 

