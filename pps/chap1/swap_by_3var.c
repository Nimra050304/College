#include <stdio.h>
int main (){
  int a,b,c;
  printf("Input the first number");
  scanf("%d",&a);
  printf("Input the second number");
  scanf("%d",&b);
  c=a;
  a=b;
  b=c;
  printf("Value of first number is %d and value of second number is %d",a,b);
  return 0;
}
