#include <stdio.h>

void selectionSort(int*, int);
void swap(int*, int*);
void printArr(int*, int);

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArr(arr, size);
    selectionSort(arr, size);
    printArr(arr, size);
    return 0;
}

void selectionSort(int* arr, int size) {
    int i, j, min;
    for (i = 0; i < size; i++) {
        min = i;
        for (j = i+1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(&arr[i], &arr[min]); 
    }
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArr(int* arr, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}