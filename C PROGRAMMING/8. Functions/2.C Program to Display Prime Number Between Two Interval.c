#include<stdio.h>
int isPrime(int num)
{
  int n=1;
 for(int i=2;i<num;i++){
  if(num%i==0){
    n=0;
    break;
  }
 }
 return n;
}


int main()
{
int num1 = 31, num2 = 151, n1, n2;
printf("Prime numbers between %d and %d are: ", num1, num2);
for (n1 = num1; n1 < num2; ++n1) 
{
  n2 = isPrime(n1);
  if (n2 == 1) 
    {          
    printf("%d ", n1);
  }
}
return 0;
}