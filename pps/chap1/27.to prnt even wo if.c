#include <stdio.h>

int main() {

    
    int num;
    printf("Input the value of:  \n");
    scanf("%d",&num);

    int i;
    
    for(i=2;i<=num;i+=2)
    {
        printf("%d\t",i);
    }
    return 0;
}
