#include <stdio.h>
#include <math.h>

int main() {
    int people;
    float costpp = 250.50;
    float totalCost;

    printf("Enter the number of people in the group: ");
    scanf("%d", &people);

    totalCost = people * costpp;
    totalCost = ceil(totalCost);

    printf("Minimum total cost for the group: %.0f\n", totalCost);
    return 0;
}

