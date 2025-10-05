/*The do...while loop is better for user input because it runs at least once,
allowing the user to enter a value before the condition is checked. This makes
it more suitable than a while or for loop for input-based repetition.*/


#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        sum += num;
        printf("Current sum: %d\n", sum);

    } while (num != 0);

    printf("Final sum: %d\n", sum);
    return 0;
}
	
