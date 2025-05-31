//make strlen function
//completed
#include <stdio.h>

int main() {

    char array[50];
    int i,len=0;

    printf("Enter the string\n");
    fgets(array,sizeof(array),stdin);
    

    for (i=0;array[i]!='\0';i++)
    {
        len++;

    }
   
    printf("The length of the string is %d",len-1);

    return 0;

}
