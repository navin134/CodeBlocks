#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    unsigned short int i = 0;
    while(true) {

        for(unsigned short int l=0; l<i; l++) {
            printf(" ");
        }
        printf("-_-\n");
        /*if(i>19) {
            i = 0;
            continue;
        }*/
        i++;

    }

    return 0;
}
