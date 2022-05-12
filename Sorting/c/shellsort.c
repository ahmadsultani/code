#include <stdio.h>

void swap(int*, int*);
void insertionSort(int*, int, int, int);
void shellSort(int*, int);

int main() {
    int arr[] = {54, 23, 12, 56, 78, 50, 12, 89, 12};
    int size = sizeof(arr)/sizeof(arr[0]);
    shellSort(arr, size); 
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSort(int* arr, int size, int start, int step){
    int i, j, key;
    for(i = start+step; i < size; i += step){
        key = arr[i];
        j = i - step;
        while(j >= 0 && arr[j] > key){
            arr[j + step] = arr[j];
            j = j - step;
        }
        arr[j + step] = key;
    }
}

void shellSort(int* arr, int size){
    int step, start; 
    step = 5;
    while(step >= 1){
        for (start = 0; start < step; start++) {
            insertionSort(arr, size, start, step);
        }
        step = step - 2;
    }
}