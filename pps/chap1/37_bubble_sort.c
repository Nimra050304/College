#include <stdio.h>

int main() {

    int array[10];

    for(int i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }

    int temp;
    for( int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(array[j]<array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("Final array is:\n");
    for (int i=0;i<10;i++)
    {
        printf("%d\t",array[i]);

    }
    return 0;
}
