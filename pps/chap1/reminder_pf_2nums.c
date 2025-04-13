#include <stdio.h>
int main(){
    float a,b;
    printf("\nInput the first number\n");
    scanf("%f",&a);
    printf("\nInput the second number\n");
    scanf("%f",&b);
    if(b!=0){
        printf("\nThe reminder when %f is divided by %f is %f\n",a,b,a%b);}
    else{
        printf("\nThe division is not possible\n");
    return 0;
}
