// 28. Write a program of C to print all no. from n to 1

#include <stdio.h>
int main(){
    int n;

    printf("eanter any number");
    scanf("%d",&n);

    while(n<=1){

        printf("%d ",n);
        n+=1;
    }
    
    return 0;
}