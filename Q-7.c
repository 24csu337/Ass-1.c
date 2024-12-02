// WAP for Binary to Decimal conversion & Decimal to Binary for a given number as per user’s choice.

#include <stdio.h>
#include <math.h>

int binaryToDecimal(int bin) {
    int decimal = 0, base = 1, rem;

    while (bin > 0) {
        rem = bin % 10;
        decimal = decimal + rem * base;
        bin = bin / 10;
        base = base * 2;
    }
    return decimal;
}
int decimalToBinary(int decimal) {
    int bin = 0, base = 1;

    while (decimal > 0) {
        int rem = decimal % 2;
        bin = bin + rem * base;
        decimal = decimal / 2;
        base = base * 10;
    }
    return bin;
}

int main() {
    int choice, num;
    printf("Choose conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &num);
        printf("Decimal equivalent: %d\n", binaryToDecimal(num));
    }
    else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &num);
        printf("Binary equivalent: %d\n", decimalToBinary(num));
    }
    else {
        printf("Invalid choice...\n");
    }

    return 0;
}
