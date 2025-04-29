#include <stdio.h>

int main() {

    float n;
    printf("Input the value of: n \n");
    scanf("%f",&n);

    if (n)//in other words, it means that when the value of n is non zero 
    {
        if (n>0)
        {
            printf("positive");
        }
        else if (n<0)
        {
           printf("negative");
        }  
    }
    else{
        printf("Number is zero");
    }
    return 0;
}
