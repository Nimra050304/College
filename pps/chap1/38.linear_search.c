#include <stdio.h>

int main() {

    int array[10];

    for(int i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }

    int target,check=0;
    printf("Put the value of target");
    scanf("%d",&target);

    for(int i=0;i<10;i++)
    {
        if(array[i]==target)
        {
            printf("%d found at %dth place",target,i+1);
            check++;
            break;
        }
    }
    if(!check)
    {
        printf("%d not found",target);
    }

    return 0;
}
