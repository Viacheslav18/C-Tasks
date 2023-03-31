#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNumber, guess, attempts = 5;
    srand(time(0));
    secretNumber = rand() % 100 + 1;

    printf("I thought of a number between 1 and 100. Try to guess it in %d tries.\n", attempts);

    while (attempts > 0)
    {
        printf("Enter a number: ");
        scanf("%d", &guess);

        if (guess == secretNumber)
        {
            printf("You guessed it! The intended number was %d.\n", secretNumber);
            break;
        }
        else if (guess < secretNumber)
        {
            printf("The intended number is greater than %d.\n", guess);
        }
        else
        {
            printf("The intended number is less than %d.\n", guess);
        }

        attempts--;
    }

    if (attempts == 0)
    {
        printf("You didn't guess. The intended number was %d.\n", secretNumber);
    }

    return 0;
}