#include <stdio.h>
#include <string.h>

 void addToCart(char cart[][30], int *count, char productName[])
  {
       strcpy(cart[*count], productName);
        (*count)++;
  }
 void displayCart(char cart[][30], int count)
  {
        int i;
        printf("\nUpdated Cart:\n");
        for(i = 0; i < count; i++)
            {
                printf("%d. %s\n", i + 1, cart[i]);
            }
  }

 int main()
    {
         char cart[10][30] = {"Mobile", "Headphones"};
         int count = 2;
         addToCart(cart, &count, "Smart Watch");
         displayCart(cart, count);

        return 0;
    }
