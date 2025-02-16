#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void guess(int N)
{
    int number, guess, numberofguess = 0;
    // Seed random number generator
    srand(time(NULL));
    // Generate a random number
    number = rand() % N;
    printf("  GUESS THE NUMBER  \n");
    printf("You have only 7 turn to guess the correct number\n");
    printf("\n Use them wisely");
    printf("Guess a number between"
           " 1 and %d\n",
           N);

    do
    {
        if (numberofguess > 8)
        {
            printf("\nYou Loose!\n");
            break;
        }
        // Input by user
        scanf("%d", &guess);
        // When user guesses lower than actual number
        if (guess > number)
        {
            printf("Lower number "
                   "please! \n");
            numberofguess++;
        }
        // When user guesses higher
        // than actual number
        else if (number > guess)
        {
            printf("Higher number"
                   " please! \n");
            numberofguess++;
        }

        else
        {
            if (numberofguess == 1)
            {
                printf("Congragulations!!! you have guessed it in your first try");
            }
            else if (numberofguess != 1)
            {
                printf("You guessed the"
                       " number in %d "
                       "attempts! \n",
                       numberofguess);
            }
        }
    }
    while (guess != number);
}

// Driver Code
int main()
{
    int N = 100;
    // Function call
    guess(N);
    return 0;
}
