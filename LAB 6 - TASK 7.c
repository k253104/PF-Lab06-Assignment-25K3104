#include <stdio.h>

int main() {
    int amount;
    int coins25 = 0, coins10 = 0, coins5 = 0, coins1 = 0;

    printf("Enter the amount in cents: ");
    scanf("%d", &amount);

    while (amount > 0) {
        if (amount >= 25) {
            coins25++;
            amount -= 25;
        } else if (amount >= 10) {
            coins10++;
            amount -= 10;
        } else if (amount >= 5) {
            coins5++;
            amount -= 5;
        } else {
            coins1++;
            amount -= 1;
        }
    }

    printf("25-cent coins: %d\n", coins25);
    printf("10-cent coins: %d\n", coins10);
    printf("5-cent coins: %d\n", coins5);
    printf("1-cent coins: %d\n", coins1);
    return 0;
}

