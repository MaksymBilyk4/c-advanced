#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swapInts(int *v1, int *v2) {
    int temp = *v1;

    *v1 = *v2;
    *v2 = temp;
}

void swapIntsNoThird1(int *v1, int *v2) {
    *v1 = *v1 + *v2;
    *v2 = *v1 - *v2;
    *v1 = *v1 - *v2;
}

void swapIntsNoThird2(int *v1, int *v2) {
    *v1 = *v1 * *v2;
    *v2 = *v1 / *v2;
    *v1 = *v1 / *v2;
}

void genericSwap(void *v1, void *v2, int size) {

    void *tempMemory = malloc(size);

    memcpy(tempMemory, v1, size);
    memcpy(v1, v2, size);
    memcpy(v2, tempMemory, size);

    free(tempMemory);
}


int main() {

    int n1 = 10, n2 = 20;
    printf("Before swap (1): %d %d\n", n1, n2);
    swapInts(&n1, &n2);
    printf("After swap (1): %d %d\n", n1, n2);
    printf("\n");

    int n3 = 5, n4 = 10;
    printf("Before swap (2): %d %d\n", n3, n4);
    swapIntsNoThird1(&n3, &n4);
    printf("After swap (2): %d %d\n", n3, n4);
    printf("\n");

    int n5 = 3, n6 = 10;
    printf("Before swap 3): %d %d\n", n5, n6);
    swapIntsNoThird2(&n5, &n6);
    printf("After swap (3): %d %d\n", n5, n6);
    printf("\n");

    double d1 = 3.14, d2 = 2.7;
    printf("Before swap (4): %lf %lf\n", d1, d2);
    genericSwap(&d1, &d2, sizeof(d1));
    printf("After swap (4): %lf %lf\n", d1, d2);

    return 0;
}