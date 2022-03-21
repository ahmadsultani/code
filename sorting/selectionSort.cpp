#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int arr[] = {1,2,9,3,4,5,7,5,6,10,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < len; i++) {
        int min = i;
        for (int j = i+1; j < len; j++) {
            if (arr[j] < arr[min]) min = j;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    for (int i : arr) cout << i << " ";
    return 0;
}
