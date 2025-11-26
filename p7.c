//Write a program of C program to find quotient and remainder

#include<stdio.h>
int main(){
int x,y,q,r;

printf("enter a dividend");
scanf("%d",&x);

printf("enter a divisor");
scanf("%d",&y);

q=x/y;
printf("this is quotient :%d\n",q);

r=x%y;
printf("this is remainder :%d\n",r);

return 0;
}