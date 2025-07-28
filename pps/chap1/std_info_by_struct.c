#include <stdio.h>

int main() {

    struct student
    {
        char name[20];
        int roll_no;

    }std_info[5];

    for (int i=0;i<5;i++)
    {
        if(i==0)
        {
            printf("Input the name of 1st student\n");

        }
        else if(i==1)
        {
            printf("Input the name of 2nd student\n");
        }
        else 
        {
            printf("Input the name of %dth student\n",i+1);
        }

        fgets(std_info.name[i],sizeof(std_info.name[i],stdin));

        scanf("%d",&std_info.roll_no[i]);
        int consume;
        while ((consume=getch())!=NULL)
        {}
    }


    for(int i=0;i<5;i++)
    {
        printf("%s\n",std_info.name[i]);
    }

    return 0;
}
