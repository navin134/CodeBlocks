#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum Company com1 = XEROX, com2 = GOOGLE, com3 = EBAY;

    printf("company 1: %d\n", com1);
    printf("company 2: %d\n", com2);
    printf("company 3: %d\n", com3);

    return 0;
}
