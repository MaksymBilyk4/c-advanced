#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void backslahN() {
    printf("\n");
}

void genericSwap(void *ptr1, void *ptr2, int size) {

    // create SIZE bytes of memory, and point to this address
    void *tempMemory = malloc(size);

    // copy SIZE bytes from address 'ptr1' to 'tempMemory'
    memcpy(tempMemory, ptr1, size);

    // copy SIZE bytes from address 'ptr2' to 'ptr1'
    memcpy(ptr1, ptr2, size);

    // copy SIZE bytes from address 'tempMemory' to 'ptr2'
    memcpy(ptr2, tempMemory, size);

    // swap finished, clear allocated memory
    free(tempMemory);
}

void swapNums(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void arrayPrint(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    backslahN();
}

int main() {
//    int userNum1 = 0;
//    int userNum2 = 0;
//
//    printf("Enter number one: ");
//    scanf("%d", &userNum1);
//
//    printf("Enter number two: ");
//    scanf("%d", &userNum2);
//
//    printf("%d %d\n", userNum1, userNum2);
//    swap(&userNum1, &userNum2);
//    printf("%d %d\n", userNum1, userNum2);


//    int data = 10;
//    int *p; // "point" to "int" somewhere. Keeps the address
//    p = &data;

    // *p = 10; ---> change value, get value
    // p = & data ---> change address, get address

//    printf("%d", data);
//    backslahN();
//    printf("%p", &data);
//    backslahN();
//    printf("%p", p);
//    backslahN();
//    *p = 100;
//    printf("%d", data);

//    int data[3] = {3, 6, 9};
//
//    int *ptr = &data;
//    ptr = ptr + 1;
//    *ptr = 100;
//
//    printf("%d", *ptr);
//    arrayPrint(data, 3);
//    printf("%d", *ptr);

//    int num = 30;
//    int *ptr;
//
//    printf("%d\n", num);
//    ptr = &num;
//    printf("%p\n", &num);
//    printf("%p\n", ptr);
//    *ptr = 20;
//    printf("%d\n", num);
//    int arr[5] = {1, 2, 3, 4, 5};
//    printf("%d", sizeof(arr));
//    backslahN();
//    printf("%p", &arr);
//    backslahN();
//    printf("%p", &arr+1);
//    backslahN();
//    printf("%p", &arr+2);
//    backslahN();
//    printf("%p", &arr+3);
//    int d1 = 1, d2 = 100;
//    printf("%d", sizeof(d1 + d2));

//    int data[4] = {1, 2, 3, 4};
//    printf("%d", sizeof(data) / sizeof(int));
//    int *ptr;
//    int num = 1;
//    ptr = &num;
//    printf("%d", sizeof(ptr));

//    int a, b;
//    printf("Input two numbers: \n");
//    scanf("%d", &a);
//    scanf("%d", &b);
//
//    printf("BEFORE swap: (%d ; %d)\n", a, b);
//    swapNums(&a, &b);
//    printf("AFTER swap: (%d ; %d)\n", a, b);


//    int a = 10;
//    int b = 20;
//    int *ptr = &a;
//    int **ptr2 = &ptr;
//
//    printf("%p", *ptr2);
//    *ptr2 = &b;
//    backslahN();
//    printf("%d", *ptr);
    int n1 = 10, n2 = 20;
    double d1 = 3.14, d2 = 2.7;
    printf("Before swap %d %d", n1, n2);
    genericSwap(&n1, &n2, sizeof(n1));
    backslahN();
    printf("After swap %d %d", n1, n2);
    backslahN();
    printf("Before swap %lf %lf", d1, d2);
    genericSwap(&d1, &d2, sizeof(d1));
    backslahN();
    printf("After swap %lf %lf", d1, d2);


    return 0;
}
