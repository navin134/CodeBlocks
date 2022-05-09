#include <stdio.h>

int main() {

    for(int i=0; i<20; i++) {

        double length = i, width = i;
        double area = length * width, perimiter = 2 * (length + width);

        printf("Perimiter: %.2f Area: %.2f\n", perimiter, area);
    }


    return 0;
}
