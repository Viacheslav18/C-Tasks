//Порахувати кількість товару та ціну

#include <stdio.h>

float calculate_cost(int quantity, float price_per_unit) {
    float cost = quantity * price_per_unit;
    return cost;
}

int main() {
    int quantity;
    float price_per_unit;
    printf("Enter quantity of item: ");
    scanf("%d", &quantity);
    printf("Enter price per unit: ");
    scanf("%f", &price_per_unit);
    float total_cost = calculate_cost(quantity, price_per_unit);
    printf("Total cost: %.2f\n", total_cost);
    return 0;
}