#include <stdio.h>

int main() {

 
    int a;
    printf("Input the value of a  \n");
    scanf("%d",&a);
    
    int b;
    printf("Input the value of b \n");
    scanf("%d",&b);
    
    a=a+b;//37+56=93
    b=a-b;//b=93-56=37
    a=a-b;//a=93-37=56
    printf("a=%d and b=%d",a,b);

    return 0;
}
