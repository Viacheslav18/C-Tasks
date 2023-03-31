#include <stdio.h>

int main()
{
    int minutes, seconds;
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    seconds = minutes * 60;
    printf("%d minutes = %d seconds\n", minutes, seconds);

    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);
    minutes = seconds / 60;
    printf("%d seconds = %d minutes\n", seconds, minutes);

    return 0;
}