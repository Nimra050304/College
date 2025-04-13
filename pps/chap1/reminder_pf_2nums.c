#include <stdio.h>
int main(){
    int a,b;
    printf("\nInput the first number\n");
    scanf("%d",&a);
    printf("\nInput the second number\n");
    scanf("%d",&b);
    if(b!=0){
        printf("\nThe reminder when %d is divided by %d is %d\n",a,b,a%b);}
    else{
        printf("\nThe division is not possible\n");}
    return 0;
}
