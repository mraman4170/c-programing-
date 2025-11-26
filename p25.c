/*25. Write a menu driven program for following.
1-even/odd
2-+ve/-ve
3-perfect square / not
4-divisible by 2 & 7 or not*/

#include <stdio.h>
#include <math.h>

int main(){
int choice,num;

printf("1.check even or odd\n");
printf("2.check positive or nagetive\n");
printf("3.check perfect square or not \n");
printf("4.check divisible by 2 and 7\n");
scanf("%d",&choice);

printf("enter a number ");
scanf("%d",&num);

switch(choice){
    case 1 :
    if(num % 2 == 0)
    printf("%d is even\n");

    else
    printf("%d is odd\n",num);
    break;

    case 2 :
    if(num > 0)
    printf("%d is positive\n",num);

    else if (num < 0)
    printf("%d is nagetive \n",num);

    else
    printf("number is zero\n");
    break;

    case 3 :{
    int root = sqrt (num);
    if(root*root == num)
    printf("%d is a perfect square\n",num);

    else
    printf("%d is not perfect square\n",num);
    break;
    }
    case 4 :
    if (num % 2 == 0 && num % 7 == 0 )
    printf("%d is divisible by 2 and 7 \n",num);

    else 
    printf("%d is not divisible 2 and 7",num);
    break;

    default:
    printf("invalid choice ! \n");

    return 0;
}
}