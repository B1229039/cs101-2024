#include <stdio.h>

void printBinaryIntArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printBinaryCharArray(char arr[]) {
    for (int i = 0; arr[i] != '\0'; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

void printBinaryFloatArray(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%f ", arr[i]);
    }
    printf("\n");
}

int main() {
    int a[] = {0, 1, 2};
    char b[] = "ABC";
    float c[] = {1.1, 1.2, 1.3};

    printBinaryIntArray(a, sizeof(a) / sizeof(a[0]));
    printBinaryCharArray(b);
    printBinaryFloatArray(c, sizeof(c) / sizeof(c[0]));

    return 0;
}
