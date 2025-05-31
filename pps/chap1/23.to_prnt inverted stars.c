#include <stdio.h>
int main(){
    int n=1;
    
    int t;
    printf("How many lines should the output have");
    scanf("%d", &t);
    int e=1;
    while (n<=t)
    {
        while (e<=t-n+1)
        {
           printf("*");
           e++;
    }
    printf("\n");
    e=1;
    n++;
    

    }
    

    return 0;
}
