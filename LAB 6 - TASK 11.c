#include <stdio.h>
#include <math.h>

int main() {
    float H, theta, L;

    printf("Enter the height of the building (H): ");
    scanf("%f", &H);

    printf("Enter the angle of elevation (in radians): ");
    scanf("%f", &theta);

    L = H / tan(theta);

    printf("Length of the shadow: %.2f\n", L);
    return 0;
}

