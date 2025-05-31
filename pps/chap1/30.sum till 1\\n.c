#include <stdio.h>

int main() {

    
    int num;
    printf("Input the value of:  \n");
    scanf("%d",&num);

    float i;
    //int i; will give error in division because 1/i will be integer division and will go to zero before the 
    // value can be plugged into sum
    float sum=1.0;

    
    for(i=1;i<=num;i++)
    {
        sum+=(1/i);//or 1.0/i
    }

    printf("%f",sum);
    return 0;
}
