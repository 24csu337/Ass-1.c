// WAP to print below mentioned pattern:
// 1
// 01
// 101
// 0101
// 10101
#include<stdio.h>
int main(void){
    int i,j,n;
    printf("enter number of rows,n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j>=1;j--){
            printf("%d",j%2);
        }
        printf("\n");
    }
    return 0;
}
