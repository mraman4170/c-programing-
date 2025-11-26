//Write a program to check input number is +ve, -ve or absolute 0.

#include <stdio.h>

int main(){
int number ;

printf("enter any number");
scanf("%d",&number);

if(number>0){
    printf("your number is positive");

}else if(number<0){
    printf("your number is nagetive");

}else if (number==0){
printf("your number is absolute 0....");
}
return 0;
}