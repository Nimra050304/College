#include <stdio.h>

int main() {

    int num, pow,i,prod=1;
    
    printf("Input the value of:  \n");
    scanf("%d",&num);

    
    printf("Input the value of: pow \n");
    scanf("%d",&pow);
    
    for ( i = 0; i < pow; i++)
    {
        prod=prod*num;
        printf("%d\t",prod);
    }
    


    return 0;
}