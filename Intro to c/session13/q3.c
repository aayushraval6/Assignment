#include <stdio.h>
int main()
{
    FILE *file;
    file = fopen("playlist.txt", "a");
    if(file == NULL)
        {
            printf("File could not be opened.");

            return 1;
        }

    fprintf(file, "Love Story\n");
    fprintf(file, "Perfect\n");
    fclose(file);
    printf("Songs added successfully.");
    return 0;

}
