// Write a program of C to input any no. integer value and obtain its reverse.

#include <stdio.h>
int main(){
    int a=0,b,n;

    printf("enter a number ");
    scanf("%d",&n);

    while (n!=0){
    b=n%10;
    a=a*10+b;
    n=n/10;
    }
    printf("reverse value is %d",a);

    return 0;
    
}



