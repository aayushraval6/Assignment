#include <stdio.h>
int main()
{
    FILE *file;
    char song[100];
    file = fopen("playlist.txt", "r");
    if(file == NULL)
        {
            printf("File could not be opened.");

        return 1;

    }
    printf("Songs in Playlist:\n");
    while(fgets(song, sizeof(song), file) != NULL)
        {
             printf("%s", song);
    }
           fclose(file);
           return 0;
    }
