#include <stdio.h>
#include <ctype.h>
void capitalizeFirstLetter(char text[])
{
     if(text[0] != '\0')
        {
             text[0] = toupper(text[0]);
        }
}

int main()
{
     char productName[] = "mobile";
     char username[] = "aayush";
     capitalizeFirstLetter(productName);
     capitalizeFirstLetter(username);
     printf("Product Name: %s\n", productName);
     printf("Username: %s\n", username);
     return 0;
}
