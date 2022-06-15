#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void inputStr(int* in) {
    while(true) {
        char i;
        scanf("%c", &i);
        if(i=='x' || i=='o') {
            *in = i;
            break;
        }

    }
}

int main() {
    bool a = false, b = false;
    char in = ' ';
    char array[36];
    for(int i=0; i<36; i++)
        array[i] =
    while(!a || !b) {
        for(unsigned short int row=0; row<6; row++) {
            for(unsigned short int colm=0; colm<6; colm++) {
                printf("(%c)", array[row*colm]);
                printf("%d", row*colm);

            }
            printf("\n");
        }
        printf("\n");
        inputStr(&in);

    }

    return 0;
}
