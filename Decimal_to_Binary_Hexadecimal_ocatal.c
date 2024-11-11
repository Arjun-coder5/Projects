#include <stdio.h>

int main() {
 printf("hello world ");
    int decimalNumber;

    // Input: decimal number from the user
    printf("Enter a decimal  number: ");
    scanf("%d", &decimalNumber);

    // For binary representation
    printf("Binary: ");
    for (int i = 31; i >= 0; i--) {
        int binaryBit = (decimalNumber >> i) & 1; 
        printf("%d", binaryBit);
    }
    printf("\n");

    // For hexadecimal representation
    printf("Hexadecimal: %X\n", decimalNumber);

    // For octal representation
    printf("Octal: %o\n", decimalNumber);

    return 0;
}