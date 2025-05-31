#include<stdio.h>
int main(){
    int n,i=1,p;//user input, multiplier, product
    printf("Input the number whose table has to be calculated\n");
    scanf("%d",&n);
    for (i = 1; i <=10; i++)
    {
        p=n*i;
        printf("%d*%d =%d\n",n,i,p);//e.g. 4*3=12
    }
    
    return 0;

}
