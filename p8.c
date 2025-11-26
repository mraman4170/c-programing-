//Write a program of C program to find area and perimeter of circle

#include <stdio.h>

int main(){
    float r,p,a,pi=3.14;

    printf("enter radius of circle:");
    scanf("%f",&r);

    a=pi*r*r;
    printf("the area of the circle is %f\n",a);

    p=2*pi*r;
    printf("the perimeter of circle is %f",p);

    return 0;
}