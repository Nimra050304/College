#include <stdio.h>

int main() {
    int e,p,b,c,n;
    
    printf("Input the value of: n \n");
    scanf("%d",&n);
    c=0;
    b=1;

    
    for ( e = 0; e < n; e++)
    {
        if (!e)
        {
            printf("1, ");
        }
        else{
        p=c+b;
        c=b;
        b=p;  
        printf("%d, ",p) ; }
    }
 


    return 0;
}
