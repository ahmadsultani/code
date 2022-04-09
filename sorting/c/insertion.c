#include <stdio.h>

void swap(int*, int*);
void insertionSort(int*, int);

int main() {
    int arr[] = {11,21,34,40,15,13,9,10,8};
    insertionSort(arr, sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void insertionSort(int* arr, int size) {
    for (int step = 1; step < size; step++) {
        int key = arr[step];
        int j = step - 1;
        while (key < arr[j] && j >= 0) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}