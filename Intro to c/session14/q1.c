#include <stdio.h>
int main()
{
    char *items[] = {"Burger", "Pizza", "Fries"};
    int prices[] = {120, 250, 90};
    int total = 0;
    int i;
    for(i = 0; i < 3; i++)
        {
            total += prices[i];
        }
        printf("Total price is: ₹%d", total);

        return 0;
}
