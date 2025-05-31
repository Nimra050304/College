#include <stdio.h>

int main() {

    
    int num;
    printf("Input the value of:  \n");
    scanf("%d",&num);

    int i;
    
    for(i=1;i<=num;i++)
    {
    if(i%2==0){
        printf("%d\t",i);
    }
 }
    return 0;
}
