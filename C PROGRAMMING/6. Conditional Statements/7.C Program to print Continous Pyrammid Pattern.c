/*Input: rows = 5
Output:  
A 
B C 
D E F 
G H I J 
K L M N O 

Input: rows = 3
Output:
A 
B C 
D E F 
*/

#include<stdio.h>
int main()
{
int num=5;
char character='A';
for(int i=0;i<num;i++){
  for(int j=0;j<=i;j++){
    printf("%c ",character);
    character++;
  }
  printf("\n");
}
return 0;

}