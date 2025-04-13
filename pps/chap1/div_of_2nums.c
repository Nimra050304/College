#include <stdio.h>
int main(){
    float a,b;
    printf("\nInput the first number\n");
    scanf("%f",&a);
    printf("\nInput the second number\n");
    scanf("%f",&b);
   if(b!=0){
      printf("\nThe division of %f and %f is %f",a,b,a/b);}
  else{
    printf("The division is not possible");

    return 0;
}
