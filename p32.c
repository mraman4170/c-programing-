// 32. Write a program of C to evaluate factorial of given no
#include <stdio.h>


int main(){
    int n,f=1,x=1;

    printf("enter number");
    scanf("%d",&n);

    do{
        f=f*x;
        x++;
    }
    while(x<=n);
    printf("%d ",f);

    return 0;
}