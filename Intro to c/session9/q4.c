#include <stdio.h>
 int main()
 {
 int cricketScores[3][2] =
 {
      {180, 165},
       {145, 190},
       {175, 170}
       };
       int i;
       for(i = 0; i < 3; i++)
        {
             if(cricketScores[i][0] > cricketScores[i][1])
             {
                 printf("Match %d Highest Score = %d\n", i + 1, cricketScores[i][0]);
             }
             else
                {
                     printf("Match %d Highest Score = %d\n", i + 1, cricketScores[i][1]);
                }
         }

          return 0;
       }
