#include <stdio.h>
#include <string.h>

double pwer(double a, int n){
        int j=1;
        double p=a;
        if(n>0){
        while (j<n)
        {
            p*=a;
            j++;
        }}
        else if (n==0){p=1.0;}
        return p;
    }

int main() {

    
char array[10];
scanf("%s",array);

int b=strlen(array);
int sum=0,place=0,numb=0;
int matrix[b];

for (int i=0;i<b;i++){
    matrix[i]=((int)array[i])-48;
}

for (int i=0;i<b;i++){
    sum=sum+pwer(matrix[i],b);
}

//original number
for (int i=b;i>0;i--){
    place=matrix[i-1]*pwer(10,b-i);
    numb=numb+place;
}

if(sum==numb){
    printf("%d is an armstrong number",numb);
}
else printf("%d is not an armstrong number as the sum of %dth power of the digits is %d",numb,b,sum);

printf("\n%d",sum);


  return 0;
}
