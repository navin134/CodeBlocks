#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bitDisplay(unsigned int num) {

        unsigned int  bitcheck= 1;//0000 0000 0000 0000 0000 0000 0000 0001
        //unsigned int num = 11;    //0000 0000 0000 0000 0000 0000 0000 1111
        unsigned short int datatypebits = 32;//sizeof(int)*8;
        unsigned int array[datatypebits];
        for(int i=0; i<datatypebits; i++) {

            array[i] = num & bitcheck;
            num >>= 1;

        }
        unsigned int array_size = sizeof(array)/sizeof(array[0]);//works because size of returns bytes of given thing and each element will have same size
        //so gives num of elements
        for(int i=array_size-1; i>=0; i--) {
            printf("%d", array[i]);
            if(i % 4 == 0)
                printf(" ");

        }



}

int main()
{
    unsigned int a = 60; //0000 0000 0000 0000 0000 0000 0011 1100
    unsigned int b = 13; //0000 1101
    int result = 0;

    result = a & b;
    //0000 1100 12
    printf("result: %d\n", result);

    result = a | b;
    //0011 1101 61
    printf("result: %d\n", result);

    result = a ^ b;
    bitDisplay(result);
    //0011 0001
    printf("result: %d\n", result);

    result = ~a;
    printf("result: %d\n", result);

    result = ~b;
    printf("result: %d\n", result);

    printf("result: %lu\n", sizeof(unsigned int));

    result = a << 2;
    // 1111 000
    printf("result: %d\n", result);

    bitDisplay(2147483647);

    printf("\n%d %d\n", sizeof(short), sizeof(int));

    double ints = 0;
    for(int i=0; i<31; i++) {

            ints += pow(2, i);

    }

    printf("%.2f\n", ints);

    return 0;
}
