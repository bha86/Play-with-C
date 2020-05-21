#include <stdio.h>
int main() {
    int dividend = 2, divisor = 3, quotient = 4, remainder = 5;

    quotient = dividend / divisor;


    remainder = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}
