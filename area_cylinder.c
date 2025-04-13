//To calculate area of a cylinder
#include <stdio.h>

int main (){
    float pi=3.14;
    int radius;
    printf ("Enter the radius of the cylinder");
    scanf("%d", &radius);
    int height;
    printf("Enter the height of the cylinder");
    scanf("%d", &height);
    float area= 2*pi*height*radius;
    printf("The area of the cylinder is %f",area);
return 0;
}