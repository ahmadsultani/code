#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void duplicateZero(vector<int> &arr){
        //O(N^2) time O(1) space
        // for (int i = 0; i < arr.size();i++) {
        //     if (arr[i] == 0) {
        //         for (int j = arr.size() - 1; j >= 0; j--) {
        //             arr[j] = arr[j - 1];
        //         }
        //         i++;
        //     }
        // }

        //O(N) time O(1) space
        int zeros = 0, lastIndex = arr.size()-1;
        for (int i = 0; i <= lastIndex-zeros; i++) {
            if (arr[i] == 0) {
                if (i == lastIndex-zeros) {
                    arr[lastIndex] = 0;
                    lastIndex -= 1;
                } else zeros++;
            }
        }
        for (int i = lastIndex-zeros; i >= 0; i-- ) {
            if (arr[i] == 0) {
                arr[i+zeros] = 0;
                zeros--;
                arr[i+zeros] = 0;
            } else {
                arr[i+zeros] = arr[i]; 
            }
        }
    }
};

int main() {
    ios::sync_with_stdio(0); cin.tie(0); //fast I/O
    vector<int> arr = {1,0,2,3,0,0,4,5};
    Solution solution;
    solution.duplicateZero(arr);
    for (int i : arr) cout << i << " ";
    cout << "\n";
    return 0;
}