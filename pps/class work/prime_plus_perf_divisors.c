//To check whether a number is prime or not by checking the number of perfect divisors and also displaying them
#include <stdio.h>

int main() {

    int n,q,p;//user input,divisor,no. of perf divisors
    printf("Input the number to be checked");
    scanf("%d",&n);
    q=2,p=0;
    while (q<n)
    {
        if (n%q)
        {
            q++;
        }
        if (!(n%q))
        {
            printf("\nThe perfect divisor is %d",q);
            p++;
            q++;
        }
        
    }
    if (p>1)
    {
       printf("\nThe number is not prime");
    }
    else{
        printf("\nThe number is prime");
    }
    

    return 0;
}
