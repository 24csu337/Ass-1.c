//WAP to check whether number is Perfect Number or not.
#include <stdio.h>
int main() {
    int num;
    printf("enter number,num: ");
    scanf("%d",&num);
    int i,div,count;
    count=0;
    for (i=1;i<num;i++){
        div=num%i;
        if(div==0){
            count+=i;
        }
    }
    if(count==num){
        printf("%d is a perfect number",num);
    }
    else{
        printf("%d is not perfect",num);
    }

    return 0;
}