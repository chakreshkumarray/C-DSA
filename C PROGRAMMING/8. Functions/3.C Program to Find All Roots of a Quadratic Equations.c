#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void quadratic(int a , int b , int c)
{
  if(a==0){
    printf("invalid");
    return;
  }
  int d=b*b-4*a*c;
  double sqrtval=sqrt(abs(d));

  if(d>0){
    printf("Roots are real and different\n"); 
    printf("%f\n%f", (double)(-b + sqrtval) / (2 * a),(double)(-b - sqrtval) / (2 * a)); 
  }
  else if(d=0){
    printf("Roots are real and same\n");
    printf("%f", -(double)b / (2 * a));
  }else{
    printf("Roots are complex\n"); 
    printf("%f + i%f\n%f - i%f", -(double)b / (2 * a),sqrtval / (2 * a), -(double)b / (2 * a),sqrtval / (2 * a)); 
  }


}

int main()
{
int a=0.1;
int b=-7;
int c=12;

quadratic(a ,b,c);

return 0;
}