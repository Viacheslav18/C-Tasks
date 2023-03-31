#include <stdio.h>

int main(void) {
    double hryvnia, euro, dollar;
    double euro_rate = 0.025; // exchange rate for hryvnia to euro
    double dollar_rate = 0.027; // exchange rate for hryvnia to dollar

    printf("Enter the amount of money in hryvnias: ");
    scanf("%lf", &hryvnia);

    euro = hryvnia * euro_rate;
    dollar = hryvnia * dollar_rate;

    printf("%.2f hryvnias is equal to %.2f euros and %.2f dollars.\n", hryvnia, euro, dollar);

    return 0;
}