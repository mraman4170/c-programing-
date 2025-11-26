/* Write a program of C to input basic salary and then calculate income tax as per given Condition.
_____________________________
|  Basic salary  | IncomeTax| 
|     <5000      |    0%    |
|  >=5000&<7000  |    3%    |
|  >=7000&<10000 |    4%    |
|     >=10000    |    5%    |
-----------------------------    */

 #include <stdio.h>

 int main(){
    int s;

    printf("enter your salary");
    scanf("%d",&s);

    if(s<5000){
     printf("income tax is 0%%");

    }else if (s>=5000 && s<7000){
        printf("income tax is 3%%");

    }else if (s>7000 && s<1000){
        printf("inome tax is 4%%");

    }else if (s>=10000){
        printf ("income tax is 5%%");
    }

   
return 0;
 }