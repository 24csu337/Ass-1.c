//WAP to subtract two integers without using Minus (-) operator. (Hint Bitwise operator)
#include<stdio.h>
int main(){
    int a,b,sub;
    printf("\nenter first number,a:");
    scanf("%d",&a);
    printf("\nenter second number,b:");
    scanf("%d",&b);
    
    /*sub=~b;             1s compliment
    sub=sub+1;            2s compliment*/
    sub=a+(~b+1);
    printf("\nsubtraction of %d and %d is %d",a,b,sub);
    return 0;
}