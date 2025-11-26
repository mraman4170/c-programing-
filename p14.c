// Write a program of C to check candidate is eligible for vote or not.

#include<stdio.h>

int main(){
int age;

printf("enter your age");
scanf("%d",&age);

if(age>=18){
    printf("eligible for vote");

} else {
    printf("you are not eligible for vote");
}

return 0;
}