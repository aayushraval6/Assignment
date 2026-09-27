#include <stdio.h>
#include <string.h>
#include <ctype.h>
void convertToLower(char str[])
{
    int i;
    for(i = 0; str[i] != '\0'; i++)
        {
            str[i] = tolower(str[i]);

        }
}

int main()
      {
          FILE *file;
          char song[100];
          char lowerSong[100];
          file = fopen("playlist.txt", "r");
          if(file == NULL)
            {
                printf("File could not be opened.");
                return 1;
            }
            printf("Songs containing 'love':\n");
            while(fgets(song, sizeof(song), file) != NULL)
                {
                    strcpy(lowerSong, song);
            convertToLower(lowerSong);
            if(strstr(lowerSong, "love") != NULL)
                {
                    printf("%s", song);
            }
            }
             fclose(file);
              return 0;
               }
