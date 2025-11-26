// Write a program of C to print Fibonacci's series for 20 terms.
#include <stdio.h>

int main(){
   int a=0,A=1,_=2,b;

   printf("%d\n%d\n",a,A);
   
   while (_<=20){
    b=a+A;
    printf("%d \n",b);
    a=A;
    A=b;
    _++;
   }
   
return 0;
}