//Write a program of C to convert the given rupees in to paisa
#include<stdio.h>

int main(){
int rupees,paisa;

printf("enter amount in rupees:");
scanf("%d",&rupees);

paisa=rupees*100;
printf("%d",paisa);
return 0;

} 