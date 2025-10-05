#include <stdio.h>

int main() {
    int balance = 50000;
    int withdraw;

    while (balance > 0) {
        printf("Current balance: %d\n", balance);
        printf("Enter amount to withdraw: ");
        scanf("%d", &withdraw);

        if (withdraw > balance) {
            printf("Insufficient balance. Try again.\n");
        } else {
            balance-=withdraw;
            printf("Withdrawal successful. Remaining balance: %d\n", balance);
        }
    }

    printf("Insufficient Balance.\n");
    return 0;
}

