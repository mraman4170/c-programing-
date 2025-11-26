// 12. Write a program of C program to swap two integer numbers without using temporary Variable:

#include<stdio.h>

int main(){
int q,r;

printf("enter the number for q");
scanf("%d",&q);

printf("enter the number for r");
scanf("%d",&r);

q=r+q;
r=q-r;
q=q-r;

printf("q=%d and r=%d",q,r);

return 0;

}