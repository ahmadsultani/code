#include <iostream>
using namespace std;

int binarySearch(int* arr, int target, int len){
    int left = 0, right = len - 1;
    while(left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1; 
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int arr[] = {1, 2, 3, 5, 7, 8, 9, 10, 18, 19, 21, 20};
    int target = 9;
    cout << "target found at index ";
    cout << binarySearch(arr, target, sizeof(arr)/sizeof(int));
    return 0;
}