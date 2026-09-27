#include <stdio.h>
 float calculateAverage(int orders[], int size)
  {
       int i;
        int sum = 0;
         for(i = 0; i < size; i++)
            {

                sum = sum + orders[i];
            }
         return (float)sum / size;
         }

    int main()
      {
            int dailyOrders[7] = {200, 350, 150, 400, 250, 300, 350};
            float average;
            average = calculateAverage(dailyOrders, 7);
            printf("Average weekly spend = ₹%.2f", average);

        return 0;
      }
