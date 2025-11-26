//Write a program of C program to swap two integer numbers

#include<stdio.h>

int main(){

int num,a,h;

printf("enter any number for a");
scanf("%d",&a);

printf("enter any number for h");
scanf("%d",&h);

num=a;
a=h;
h=num;
printf("a=%d and h=%d",a,h);

return 0;

}