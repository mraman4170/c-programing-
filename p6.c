//Write a program of C to convert the given paisa in to rupees.

#include<stdio.h>

int main(){

int paisa,rupees;

printf("enter a amount in paisa");
scanf("%d",&paisa);

rupees=paisa/100;
 printf("rupees %d",rupees);
 return 0;
}