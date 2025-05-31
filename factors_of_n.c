#include <stdio.h>

int main() {

    
    int num,i,check=0;
    printf("Input the value of number to checked \n");
    scanf("%d",&num);

    for (i=2;i<(num/2);i++)
    {
        if(!(num%i))
        {
            printf("The divisor is %d\n",i);
            check++;
        }
    }
    if(!check)
    printf("No numbers divides the number perfectly");
        

    return 0;
}