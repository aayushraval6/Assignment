#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    char username[6];

    printf("Enter your full name: ");
    scanf(" %[^\n]", name);

    if(strlen(name) < 5)
    {
        strcpy(username, name);
    }
    else
    {
        strncpy(username, name, 5);
        username[5] = '\0';
    }

    printf("Generated Username: %s", username);

    return 0;
}
