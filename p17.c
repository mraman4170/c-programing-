// Write a program of C to input a, b, c and print largest from them.

#include <stdio.h>

int main(){
    int a,b,c;

    printf("enter number for A");
    scanf("%d",&a);

    printf("enter number for B");
    scanf("%d",&b);

    printf("enter number for C");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("A is biggest number");

    } else if(b>a && b>c){
        printf("B is biggest number");

    } else {
        printf("C is biggset number");
    }
    return 0;
    }