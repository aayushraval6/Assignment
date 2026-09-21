#include <stdio.h>
#include <string.h>

int main()
{
    char songs[3][30] = {
        "Kesariya",
        "Tum Hi Ho",
        "Apna Bana Le"
    };

    char guess[30];
    int randomSong;

    srand(time(0));

    randomSong = rand() % 3;

    do
    {
        printf("\nGuess the Song!\n");
        printf("Enter your guess: ");
        scanf(" %[^\n]", guess);

        if(strcmp(guess, songs[randomSong]) == 0)
        {
            printf("Correct! You guessed the song!\n");
        }
        else
        {
            printf("Wrong guess! Try again.\n");
        }

    } while(strcmp(guess, songs[randomSong]) != 0);

}
