#include <stdio.h>
#include <math.h>

int main() {
    float I, S, M;

    printf("Enter the intensity of the earthquake (I): ");
    scanf("%f", &I);

    printf("Enter the standard reference value (S): ");
    scanf("%f", &S);

    if (S <= 0) {
        printf("Error: Reference value (S) must be greater than zero.\n");
        return 0;
    }

    if (I <= 0) {
        printf("Error: Intensity (I) must be greater than zero.\n");
        return 0;
    }

    M = log10(I / S);
    printf("The magnitude of the earthquake is: %.2f\n", M);

    return 0;
}

