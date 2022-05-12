#include <bits/stdc++.h>
using namespace std;

void swap(int*, int*);
void insertionSort(int*, int);

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    
    return 0;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSort(int* arr, int size){
    int i, j, key;
    for(i = 1; i < size; i++){
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}