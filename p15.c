/* Write a program to input any 3 digit integer number and the n check it is palindrome number or not 
(palindrome number : if the number and its reverse value are equal)*/

#include<stdio.h>

int main (){
    int num,a,b,c,d;
    
    printf("enter your number");
    scanf("%d",&num);

    if(num>=999 || num<=100){
        printf("enter three digit number");
        return 0;
    }

    a = num / 100;         
    b = (num / 10) % 10;  
    c = num % 10;
    d=c*100+b*10+a;

    if(d==num){
    printf("number is palindrome");

    } else{
        printf("number is not palindrome");
    }
    return 0;
}

