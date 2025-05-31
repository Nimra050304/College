#include <stdio.h>

int main() {

    
    int num;
    printf("Input the value of:  \n");
    scanf("%d",&num);
    
    int i,sum;

    for (i=1;i<=num;i++){
        sum=sum+i;
    }
    
    printf("The sum of the sequence til %d is %d",num,sum);

    return 0;
}
