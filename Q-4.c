//WAP to accept two integer numbers and swap them using 4 different methods in C.

// Method 1

#include <stdio.h>
int main() {
    double first, second, third;
    printf("Enter first number: ");
    scanf("%lf", &first);
    printf("Enter second number: ");
    scanf("%lf", &second);

//value of first is assigned to third
third = first;

//value of second is assigned to first
first = second;

//value of third (initial value of first) is assigned to second
second = third;

// %.2lf displays number up to 2 decimal points
  printf("\nAfter swapping, first number = %.2lf", first);
  printf("\nAfter swapping, second number = %.2lf", second);
  
    return 0;
}


// Method 2

#include <stdio.h>
int main() {
    
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    a = a + b;                 // a will be updated as the sum of a & b
    b = a - b;                 // now b will hold the old value of a as (a + b)-b = a.
    a = a - b;                 // & a will become b as (a + b)-a = b.
    
    printf("After swapping: a = %d, b = %d\n",a,b);
    printf("Hence ,number is:%d %d\n",a,b);
    
    return 0;
}


// Method 3

#include <stdio.h>
int main() {
    
    int a,b;
    printf("Enter two integers (non-zero): ");
    scanf("%d %d", &a, &b);

    // Swapping using XOR operator
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping: a= %d, b= %d\n",a,b);

    return 0;
}


// Method 4

#include <stdio.h>
int main() {
    
    int a,b;
    printf("Enter two integers (non-zero): ");
    scanf("%d %d", &a, &b);
    
    a = a * b;                // a's value will be updated by the multiple of a & b
    b = a / b;               // b will hold (a*b)/b = the old value of a
    a = a / b;              // and the old value of b will be assigned to a
    printf("After swapping: a= %d, b= %d\n",a,b);

    return 0;
}




 
