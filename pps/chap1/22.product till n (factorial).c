#include <stdio.h>

int main() {

    
    int num;
    printf("Input the value of:  \n");
    scanf("%d",&num);
    
    int i,prod=1;

    for (i=1;i<=num;i++){
        prod=prod*i;
        }
    
    printf("The product of the sequence till %d is %d",num,prod);

    return 0;
}
