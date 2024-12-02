// WAP to print Pascal’s Triangle.

#include <stdio.h>
int main() {
    int rows;
    printf("Enter total number of rows in Pascal's triangle to be printed is: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++) {
        int n=1; 
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" "); 
        }
        for (int j = 0; j <= i; j++) {
            printf("%d ", n);
            n = n* (i - j) / (j + 1); 
        }
        printf("\n");
    }

    return 0;
}







