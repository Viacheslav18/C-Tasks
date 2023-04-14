//Вивести ім’я у зворотньому порядку.

#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

int main() {
    char name[MAX_NAME_LENGTH];
    printf("Vvedit imya ");
    scanf("%s", name);

    int len = strlen(name);
    printf("Imya u zvorotnomu poryadku: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", name[i]);
    }
    printf("\n");
    return 0;
}
