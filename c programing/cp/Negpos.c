#include <stdio.h>

main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is positive or negative and convert it
    if (number > 0) {
    	 // number = -number;
        printf("Negative: %d\n", -number);  // +num -num = -num
    } else if (number < 0) {
    	//number = -number;
        printf("Positive: %d\n", -number);  // -num -num = +num
    } else {
        printf("The number is zero.\n");
    }
}

