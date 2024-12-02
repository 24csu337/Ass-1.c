//wap to check whether a given number is armstrong or not.
#include<stdio.h>
int main(){
    int num,count=0,sum=0,mul=1,cnt,rem;
    printf("\nenter a no to check:");
    scanf("%d",&num);
    
    int x=num;
    while(x!=0){
        x=x/10;
        count++;
    }
    cnt=count;
    x=num;
    while(x!=0){
        rem=x%10;
        while(cnt!=0){
            mul=mul*rem;
            cnt--;
        }
        sum+=mul;
        cnt=count;
        x=x/10;
        mul=1;
    }
    if(sum==num){
        printf("\n%d is an armstrong number",num);
    }
    else{
        printf("\n%d is not an armstrong number",num);
    }
    return 0;
}