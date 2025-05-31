//double the previous power
#include <stdio.h>

int main() {

    int num, pow,i;
    
    printf("Input the value of:  \n");
    scanf("%d",&num);

    
    printf("Input the value of: pow \n");
    scanf("%d",&pow);

    int prod=1;
    

    for (i=1;i<=pow;i*=2)
    {
        for (int j=1;j<=i;j++){
            prod*=num;

        }
        printf("%d",prod);
        prod=1;
        printf("\t");
    }

    return 0;
}
