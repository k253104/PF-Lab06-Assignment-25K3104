#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (; num != 0; num = num >> 1)
        if (num & 1)
            count++;
    printf("Number of 1s in binary form: %d\n", count);
    return 0;
}

