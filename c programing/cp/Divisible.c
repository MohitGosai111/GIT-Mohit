#include <stdio.h>
main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is divisible by 5
    if (number % 5 == 0) {
        printf("%d is divisible by 5.\n", number);
    } else {
        printf("%d is not divisible by 5.\n", number);
    }

    // Check if the number is divisible by 3
    if (number % 3 == 0) {
        printf("%d is divisible by 3.\n", number);
    } else {
        printf("%d is not divisible by 3.\n", number);
    }

    // Check if the number is divisible by both 5 and 3
    if (number % 5 == 0 && number % 3 == 0) {
        printf("%d is divisible by both 5 and 3.\n", number);
    } else {
        printf("%d is not divisible by both 5 and 3.\n", number);
    }

    // Check if the number is not divisible by 3 or 5
    if (number % 3 != 0 && number % 5 != 0) {
        printf("%d is not divisible by either 3 or 5.\n", number);
    }else {
        printf("%d is divisible by either 3 or 5.\n", number);
    }
}

