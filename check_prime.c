//To check prime, go from 2 to one less than the number itself. If for any value, remainder is 0, then add one to a variable
// if(var) then number is prime
#include <stdio.h>

int main() {

    int num,div,check=0;
    do
    {
    printf("Enter the value of the number to be checked");
    scanf("%d",&num);
    } while (num>1);
    
    for (div=2;div<(num/2);div++);
    {
        if(!(num%div))
        {   
            printf("The diviors is/are %d",div);//isnt working as expected 
            check++;
        }
    }
    if(check){
        printf("%d is not prime",num);
    }
    if(!check){
        printf("%d is prime",num);
    }

    return 0;
}