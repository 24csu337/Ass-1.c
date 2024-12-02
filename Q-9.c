/*WAP to print following Pyramid:
0 0
01 01
010 010
0101 0101
0101001010
*/

#include <stdio.h>
int main() {
    
    int rows = 5;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d", j % 2);
        }
        for (int j = 0; j < (rows - i - 1) * 2; j++) {
            printf(" "); 
        }
        for (int j = 0; j <= i; j++) {
            printf("%d", j % 2);
        }
        printf("\n");
    }
    for (int j = 0; j < 2 * rows; j++) {
        printf("%d", j % 2);
    }
    printf("\n"); 

    return 0;
}