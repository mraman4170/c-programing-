/*Write a program to input the marks of 4 subjects and calculate percentage and class.
% marks          Class
<35              fail
35 to 49         third class
50 to 59         second class
60 to 74         first class
>75              Distinction */
#include <stdio.h>

int main(){
     int sub1,sub2,sub3,sub4;
    float total, percentage;
    printf("enter first subject mark: ");
    scanf("%d",&sub1);

    printf("enter second subject mark: ");
    scanf("%d",&sub2);

    printf("enter third subject mark: ");
    scanf("%d",&sub3);

    printf("enter fourth subject mark: ");
    scanf("%d", &sub4);

    total=sub1+sub2+sub3+sub4;
    printf("this is total=%f\n",total);

    percentage=total/4;
    printf("this is percentage=%f",percentage);

    if(percentage < 35){
        printf("\nResult: Fail\n");
    } 
    else if (percentage >= 35 && percentage <= 49){
        printf("\nResult: Third Class\n");
    }
    else if (percentage >= 50 && percentage <= 59){
        printf("\nResult: Second Class\n");
    }
    else if(percentage >= 60 && percentage <= 74){
        printf("\nResult: First Class\n");
    }
    else if (percentage >= 75){
        printf("\nResult: Distinction\n");
    }
        return 0;
}