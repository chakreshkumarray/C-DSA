/*#include<stdio.h>
int main()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  for(int i=2;i<num;i++){
  if(num%i==0){
    printf("Number is Not Prime Number...");
    return 0;
    }
  }
 printf("Number is Prime...");
 return 0;
} */


#include<stdio.h>
int isPrime(int num)
{
 for(int i=2;i<num;i++){
  if(num%i==0){
    return 0;
  }
 }
 return 1;
}

int main()
{
 int num;
 printf("Enter a number:");
 scanf("%d",&num);
 if(isPrime(num)){
  printf("Prime....");
 }else{
  printf("Not Prime...");
 }
 return 0;
}
