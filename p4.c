//Write a program of C to find the total & percentage of four Subject marks
#include<stdio.h>

int main(){
    int sub1,sub2,sub3,sub4;
    float total, percentage;
    printf("enter first subject mark");
    scanf("%d",&sub1);

    printf("enter second subject mark");
    scanf("%d",&sub2);

    printf(" enter third subject mark");
    scanf("%d",&sub3);

    printf("enter fourth subject mark");
    scanf("%d", &sub4);

    total=sub1+sub2+sub3+sub4;
    printf("this is total=%f\n",total);

    percentage=total/4;
    printf("this is percentage=%f",percentage);

    return 0;
}