#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums;
    int tempSum = 0, maxSum = INT_MIN; 
    for (int i : nums){
        tempSum += i;
        maxSum = max(tempSum, maxSum);
        tempSum = max(0, tempSum);
    }
    cout << maxSum;
    return 0;
}