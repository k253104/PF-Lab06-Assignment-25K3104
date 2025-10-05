#include <stdio.h>

int main() {
    int n, i;
    int factorial = 1;

    printf("Enter the number of participants: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Total arrangements for %d participants = %d\n", n, factorial);
    return 0;
}

