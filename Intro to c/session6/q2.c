#include <stdio.h>
 int main()
{
   int choice;
   char newTeam[30];

    while(1)
    {
       printf("\n--- IPL Team Menu ---\n");
       printf("1. View Favorite Teams\n");
       printf("2. Add New Team\n");
       printf("3. Exit\n");
       printf("Enter your choice: ");
       scanf("%d", &choice);
       if(choice == 1)
         {
            printf("\nFavorite IPL Teams:\n");
            printf("1. Gujarat Titans\n");
            printf("2. Mumbai Indians\n");
            printf("3. Chennai Super Kings\n");
         }
        else if(choice == 2)
        {
             printf("Enter new team name: ");
             scanf("%s", newTeam);
             printf("%s added successfully!\n", newTeam);
        }
        else if(choice == 3)
        {
             printf("Exiting program...\n");
        break;
        }
        else
        {
             printf("Invalid choice!\n");
        }
    }
}
