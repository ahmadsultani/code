#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void duplicateZero(vector<int> &arr){
        //O(N^2) time O(1) space
        for (int i = 0; i < arr.size();i++) {
            if (arr[i] == 0) {
                for (int j = arr.size() - 1; j >= 0; j--) {
                    arr[j] = arr[j - 1];
                }
                i++;
            }
        }

        //O(N) time O(1) space
        int zeros = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) zeros++;
        }
    }
};

int main() {
    ios::sync_with_stdio(0); cin.tie(0); //fast I/O
    vector<int> arr = {0,1,2,3,4,5,6};
    Solution solution;
    solution.duplicateZero(arr);
    for (int i : arr) cout << i << " ";
    cout << "\n";
    return 0;
}