#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int arr[] = {1,3,5,6,2,4,10,9,8};
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        for (int j = 0; j < sizeof(arr)/sizeof(arr[0]); j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i : arr) cout << i << " ";
    return 0;
}