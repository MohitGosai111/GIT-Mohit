
	#include <stdio.h>

int main() {

    int number;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is divisible by 2
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
				


