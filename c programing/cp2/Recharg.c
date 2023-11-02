#include <stdio.h>

main() {
    float rechargeAmount;
    const float minRechargeValue = 100.0;

    printf("Enter the recharge amount: ");
    scanf("%lf", &rechargeAmount);

    // Check if the recharge amount is greater than or equal to the minimum recharge value
    if (rechargeAmount >= minRechargeValue) {
        printf("Congratulations! You are eligible for cashback.\n");
    } else {
        printf("Sorry, you are not eligible for cashback.\n");
    }
}

