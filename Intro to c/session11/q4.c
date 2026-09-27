#include <stdio.h>
void incrementFollowers(int *followers, int n)
{
    int i;
    for(i = 0; i < n; i++)
        {
            *(followers + i) = *(followers + i) + 100;
        }

}
int main()
{
     int followers[5] = {1000, 2000, 1500, 3000, 2500};
     int i;
     incrementFollowers(followers, 5);
     printf("Updated Followers:\n");
     for(i = 0; i < 5; i++)
        {
             printf("Friend %d = %d followers\n", i + 1, followers[i]);
        }
         return 0;
}
