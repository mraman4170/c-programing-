//Write a program of C program to convert feet to inches
#include<stdio.h>

int main(){
    float x,y;

    printf("enter a feet value");
    scanf("%f",&x);

    y=x*12;
    printf("the converted value of from %f feet to inches is %f",x,y);

    return 0;
}