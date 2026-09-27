#include <stdio.h>
#include <string.h>
int main()
{
    char username1[30];
    char username2[30];
    printf("Enter first username: ");
    scanf("%s", username1);
    printf("Enter second username: ");
    scanf("%s", username2);
    if(strcmp(username1, username2) == 0)
        {
            printf("Both usernames are same.");
        }
    else
        {
            printf("Usernames are different.");
        }

    return 0;
}
