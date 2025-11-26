// 23. Write a program to input any integer value(1 to 7) & then print it's week day. E.g. n =1 monday.
#include <stdio.h>
int main(){
    int n;

    printf("enter a numbe 1 to 7 :");
    scanf("%d",&n);

    switch(n){

       case 1: 
       printf("monday\n");
       break;
       case 2:
        printf("tuesday\n");
        break;
       case 3: printf("wednesday\n");break;

      case 4 : printf("thrusday\n");break;
      case 5 : printf("fridan");break;
      case 6 : printf("saturday\n");break;
      case 7 : printf("sunday\n");break;

      default : ("invalid input please enter number between 1 to 7 \n");
      
    }
    return 0;
}