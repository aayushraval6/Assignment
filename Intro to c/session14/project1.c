#include <stdio.h>
#include <stdlib.h>
#define DAYS 7

 void logListening(int minutes[])
 {
     int i;
     printf("\nEnter music listening minutes for 7 days:\n");
     for(i = 0; i < DAYS; i++)
        {
            printf("Day %d: ", i + 1);
            scanf("%d", &minutes[i]);
        }
        printf("\nListening data recorded successfully!\n");
        }

 void viewSummary(int minutes[])
 {
     int i;
     printf("\n----- Weekly Summary -----\n");
     for(i = 0; i < DAYS; i++)
        {
            printf("Day %d: %d minutes\n", i + 1, minutes[i]);
        }

 }

 void saveToFile(int minutes[])
 {
     FILE *file;
     int i;
     file = fopen("music_log.txt", "w");
     if(file == NULL)
        {
            printf("Error: File could not be opened.\n");

            return;
        }

         for(i = 0; i < DAYS; i++)
            {
                fprintf(file, "%d\n", minutes[i]);
            }

             fclose(file);
             printf("Data saved to music_log.txt successfully!\n");
 }

 void weeklyReport()
 {
     FILE *file;
     int minutes;
     int total = 0;
     int highest = 0;
     int count = 0;
     float average;
     file = fopen("music_log.txt", "r");
     if(file == NULL)
        {
            printf("\nNo saved music data found.\n");
            return;
        }

          while(fscanf(file, "%d", &minutes) == 1)
            {

             total = total + minutes;

          if(minutes > highest)
            {
                highest = minutes;
            }
              count++;
            }
         fclose(file);
         if(count == 0)
            {
                printf("\nNo data available for report.\n");
                return;

            }
         average = (float)total / count;
         printf("\n----- Weekly Music Report -----\n");
         printf("Total listening time: %d minutes\n", total);
         printf("Average listening time: %.2f minutes\n", average);
         printf("Highest listening time: %d minutes\n", highest);
 }
 void resetData(int minutes[])
 {
     FILE *file;
     char choice;
     int i;
     printf("\nAre you sure you want to delete all weekly data? (y/n): ");
     scanf(" %c", &choice);
     if(choice == 'y' || choice == 'Y')
        {
              for(i = 0; i < DAYS; i++)
                {
                    minutes[i] = 0;
                }
              file = fopen("music_log.txt", "w");
              if(file != NULL)
                {
                     fclose(file);
                }

              printf("Weekly data has been reset successfully!\n");
        }

     else
        {
            printf("Reset cancelled.\n");
     }
}

int main()
{
    int minutes[DAYS] = {0};
    int choice;
    do
        {
            printf("\n==============================\n");
    printf(" MUSIC LISTENING LOGGER\n"); printf("==============================\n");
    printf("1. Log Listening Minutes\n");
    printf("2. View Weekly Summary\n");
    printf("3. Generate Weekly Report\n");
    printf("4. Reset Weekly Data\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1: logListening(minutes);
                saveToFile(minutes);
                break;

        case 2: viewSummary(minutes);
                break;

        case 3: weeklyReport();
                break;

        case 4: resetData(minutes);
                break;

        case 5: printf("\nThank you for using Music Listening Logger!\n");
                break;

        default: printf("\nInvalid choice! Please try again.\n");
    }
}
     while(choice != 5);
     return 0;
}
