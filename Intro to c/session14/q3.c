#include <stdio.h>
void formatFollowersCount(int count)
{
    if(count < 1000)
        {
            printf("%d", count);
    }
    else if(count < 1000000)
        {
            printf("%.1fK", count / 1000.0);
        }
    else
        {
            printf("%.1fM", count / 1000000.0);
        }
}

int main()
{
    printf("1500 = ");
    formatFollowersCount(1500);
    printf("\n1200000 = ");
    formatFollowersCount(1200000);
    printf("\n750 = ");
    formatFollowersCount(750);

    return 0;
}
