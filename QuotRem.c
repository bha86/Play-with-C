#include <stdio.h>
int main() {
    int dividend = 2, divisor = 3, quotient = 4, remainder = 5;
    printf("Enter dividend: ");
    //scanf("%d", &dividend);
    //printf("Enter divisor: ");
    //scanf("%d", &divisor);

    // Computes quotient
    quotient = dividend / divisor;

    // Computes remainder
    remainder = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}
