#include <stdio.h>
#include <math.h>

int main() {
    float P, r, t;
    int n;
    float A;

    printf("Enter the principal amount (P): ");
    scanf("%f", &P);

    printf("Enter the annual interest rate (in decimal, e.g., 0.05 for 5%%): ");
    scanf("%f", &r);

    printf("Enter the number of times interest is compounded per year (n): ");
    scanf("%d", &n);

    printf("Enter the number of years (t): ");
    scanf("%f", &t);

    A = P * pow((1 + r / n), n * t);

    printf("Future value of the investment: %.2f\n", A);
    return 0;
}

