#include <stdio.h>
 int main()
  {
       int dailySteps[7] = {5000, 6500, 7200, 4800, 8000, 9000, 7500};
       int i;
        for(i = 0; i < 7; i++)
            {
                 printf("Day %d: %d steps\n", i + 1, dailySteps[i]);
            }
    return 0;

 }
