#include <stdio.h>
 void formatPrice(int price)
  {
       if(price >= 1000)
         {
              printf("₹%d,%03d", price / 1000, price % 1000);
         }
       else
         {
              printf("₹%d", price);
         }
  }
 int main()
  {
       int price1 = 1599;
       int price2 = 2499;
       int price3 = 799;
       printf("Product 1: ");
       formatPrice(price1);
       printf("\nProduct 2: ");
       formatPrice(price2);
       printf("\nProduct 3: ");
       formatPrice(price3);
       return 0;
  }
