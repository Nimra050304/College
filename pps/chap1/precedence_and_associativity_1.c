#include <stdio.h>

int main() {

    int i=8,j=5,l;
    float x=0.005, y=-0.01,m;
    char C='e',D='f';
    
m=(3*i-2*j)%(2*D-C);
printf("\nFor m=(3*i-2*j)%%(2*D-C); m= %f\n",m);

m=-(i+j);
printf("\nFor m=-(i+j), m=%f\n",m);

m=C>D;
printf("\nFor m=C>D, m=%f\n",m);

m=5*(x+y)>'C';
printf("\nFor m=5*(x+y)>'C', m=%f\n",m);

m=2*x+y==0;
printf("\nFor m=2*x+y==0, m=%f\n",m);

m=2*x+(y==0);
printf("\nFor m=2*x+(y==0), m=%f\n",m);

m=(2*x+y)==0;
printf("\nFor m=(2*x+y)==0, m=%f\n",m);

m=x>y&&i>0||j<10;
printf("\nFor m=x>y&&i>0||j<10, m=%f\n",m);

m=x>y&&i>0||j<0;
printf("\nFor m=x>y&&i>0||j<0, m=%f\n",m);

m=x>y&&i>0&&j<5;
printf("\nFor m=x>y&&i>0&&j<5, m=%f\n",m);


    return 0;
}
