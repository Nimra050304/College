//sort array in ascending order
#include <stdio.h>

int main() {
 int array[10];
 int i;

    for  (i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }

    for (i=0;i<10;i++)
    {
        for (int j=i;j<10;j++)
        {
            if(array[i]>array[j])
            {
                int a=array[i];
                array[i]=array[j];
                array[j]=a;
            }

        }
    }
    for (i=0;i<10;i++)
    {
        printf("%d, ",array[i]);
    }
    return 0;
}
