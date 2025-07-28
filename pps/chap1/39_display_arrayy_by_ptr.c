//completed
#include <stdio.h>

int main() {

    int array[5];
    for (int i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }


    for(int i=0;i<5;i++)
    {
        int *ptr=&array[i];
        printf("%d\n",*ptr);
    }

    return 0;
}
