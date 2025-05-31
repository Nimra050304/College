#include <stdio.h>

int main() {

    
    int num;
    printf("Input the value of:  \n");
    scanf("%d",&num);
    
    int i;

    for (i=num;i>0;i--)
    {
        printf("%d\t",i);
    }
    return 0;
}
