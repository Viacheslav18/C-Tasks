#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
    char model[50];
    int year;
    int price;
    char color[20];
    char type[20];
};

int main() {
    struct Car cars[] = {
        {"Porsche 911", 2021, 150000, "red", "sport"},
        {"Chevrolet Corvette", 2022, 80000, "blue", "sport"},
        {"Ford Mustang", 2020, 50000, "black", "sport"},
        {"Toyota Camry", 2022, 35000, "white", "family"},
        {"Honda Accord", 2021, 32000, "grey", "family"}
    };

    char type_choice[20], color_choice[20];
    int year_choice, price_choice;

    printf("Yakyy vy shukayete avtomobil?\n");
    printf("Vvedit typ avtomobilya (sportyvnyy, simeynyy): ");
    scanf("%s", type_choice);
    printf("Vvedit kolir avtomobilya: ");
    scanf("%s", color_choice);
    printf("Vvedit rik vypusku avtomobilya: ");
    scanf("%d", &year_choice);
    printf("Vvedit byudzhet dlya prydbannya avtomobilya: ");
    scanf("%d", &price_choice);

    struct Car matching_cars[5];
    int count = 0;

    for (int i = 0; i < 5; i++) {
        if (strcmp(cars[i].type, type_choice) == 0 && strcmp(cars[i].color, color_choice) == 0 && cars[i].year == year_choice && cars[i].price <= price_choice) {
            matching_cars[count] = cars[i];
            count++;
        }
    }

    if (count == 0) {
        printf("Na zhal, avtomobil z takymy parametramy ne znaydeno.\n");
    } else {
        printf("Os spysok avtomobiliv, shcho mistyatsya v usikh parametrakh:\n");
        for (int i = 0; i < count; i++) {
            printf("Model: %s, Rik: %d, Price: %d, Colour: %s, Typ: %s\n", matching_cars[i].model, matching_cars[i].year, matching_cars[i].price, matching_cars[i].color, matching_cars[i].type);
        }
    }

    return 0;
}