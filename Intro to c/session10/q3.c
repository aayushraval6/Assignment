#include <stdio.h>
#include <string.h>
int main()
{
    char original[] = "Flipkart";
    char shoppingApp[20];
    strcpy(shoppingApp, original);
    printf("Shopping App: %s", shoppingApp);

    return 0;
}
