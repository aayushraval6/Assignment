#include <stdio.h>
#include <ctype.h>
void getUserInitials(char name[])
 {
      int i;
       printf("Initials: ");
       printf("%c", toupper(name[0]));
       for(i = 0; name[i] != '\0'; i++)
            {
                 if(name[i] == ' ')
                  {
                       printf("%c", toupper(name[i + 1]));
       }
        }
         printf("\n");
         }
          int main()
           {
                char name[] = "Virat Kohli";
                 getUserInitials(name);
                  return 0;
            }
