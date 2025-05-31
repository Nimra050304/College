#include <stdio.h>

int main() {

    
    int num;
    printf("Input the value of:  \n");
    scanf("%d",&num);

    int i,line_num=1,j,n=num;

for (j=0;j<num;j++){
    for (i=1;i<n;i++)
    {
        printf(" ");
    }
    for (i=1;i<=line_num;i++)
    {
        printf("*");
    }
    printf("\n");
    line_num++;
    n--;


}
    return 0;
}
