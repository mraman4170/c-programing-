//Write a program of C to take two no.& perform athematic operation
#include<stdio.h>

int main(){
    int num1,num2,boss;

    printf("enter two numbers:");
    scanf("%d %d",&num1,&num2);

    boss=num1+num2;
    printf("addition of %d and %d is %d\n",num1,num2,boss);

    boss=num1-num2;
    printf("subtracsion of %d and %d is %d\n",num1,num2,boss);

    boss=num1*num2;
    printf("multiply of %d and %d is %d\n",num1,num2,boss);

    boss=num1/num2;
    printf("dividetin of %d and %d is %d\n",num1,num2,boss);

    return 0;

}
