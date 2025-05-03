//The program gives the roots of a quadratic equation using math.h. 
#include <stdio.h>
#include <math.h>


int main() {
printf("For quadratic, ax^2+bx+c=0\n");
float a;
do 
{
    printf("Input the value of: a \n");
    scanf("%f",&a);
} while (!a);//to make sure that a is not zero


float b;
printf("Input the value of: b \n");
scanf("%f",&b);


float c;
printf("Input the value of: c \n");
scanf("%f",&c);

float d=(b*b)-(4*a*c);
if(d<0){
    d=-d; //because math.h doesnt support square root of neg numbers
    printf("First root of the equation is %fi\n",((-b)/(2*a))+(sqrtf(d)/(2*a)));
    printf("Second root of the equation is %fi",((-b)/(2*a))-(sqrtf(d)/(2*a)));
}
else {
    printf("First root of the equation is %f\n",((-b)/(2*a))+(sqrtf(d)/(2*a)));
    printf("Second root of the equation is %f",((-b)/(2*a))-(sqrtf(d)/(2*a)));
}
return 0;
}
