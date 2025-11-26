#include <stdio.h>

int a,b;
void Add() {
    printf("enter two number for Addition::");
    scanf("%d %d",&a,&b);
    int sum = a+b;
    printf("%d\n",sum);
}

void sub() {
    printf("enter two number for substractoin::");
    scanf("%d %d",&a,&b);
    int sub= a-b;
    printf("%d\n",sub);
}

void mul() {
    printf("enter two number for multiply::");
    scanf("%d %d",&a,&b);
    int mul = a*b;
    printf("%d\n",mul);
}

void div() {
    printf("enter two number fot divide::");
    scanf("%d %d",&a,&b);
    int div = a/b;
    printf("%d\n",div);
}
void calulation(){
    Add();
}
int main (){
    Add();
    sub();
    mul();
    div();
    calulation();
    return 0;
}

