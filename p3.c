//Write a program of C to find square & cube of given number.
#include<stdio.h>

int main(){
    int num,sq,cb;
    printf("enter a number");
    scanf("%d",&num);

    sq=num*num;
    printf("your answer %d",sq);

    cb=num*num*num;
    printf("your answer %d",cb);
    

    return 0;

}