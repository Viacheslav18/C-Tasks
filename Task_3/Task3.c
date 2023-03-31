#include <stdio.h>

int main() {
    int seconds;
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);
    int minutes = seconds / 60;
    printf("%d seconds is equal to %d minutes\n", seconds, minutes);
    return 0;
}