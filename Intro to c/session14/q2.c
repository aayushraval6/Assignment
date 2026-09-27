#include <stdio.h>
 int isEven(int num)
 {
    if(num % 2 == 0)
        {
            return 1;
        }
    else
        {
             return 0;
        }
 }
  int main()
  {
      int number = 10;
      if(isEven(number))
        {
            printf("%d is even", number);
      }
      else
        {
             printf("%d is odd", number);
        }
      return 0;
      }
