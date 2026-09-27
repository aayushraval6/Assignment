#include <stdio.h>
 void increaseFollowersByValue(int followers)
  {
       followers = followers + 1000;
       printf("Inside pass-by-value: %d\n", followers);
  }
 void increaseFollowersByReference(int *followers)
  {
       *followers = *followers + 1000;
        printf("Inside pass-by-reference: %d\n", *followers);
  }

 int main()
  {
       int followers1 = 5000;
       int followers2 = 5000;
       increaseFollowersByValue(followers1);
       printf("Original after pass-by-value: %d\n\n", followers1);
       increaseFollowersByReference(&followers2);
       printf("Original after pass-by-reference: %d\n", followers2);
        return 0;
  }
