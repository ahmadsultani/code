#include <bits/stdc++.h>
using namespace std;

int maxSubsetSum(int arr[], int n) {
    int dp[n];
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);
    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + arr[i]);
    }
    return dp[n-1];
}

int maxSubArray(int arr[], int n) {
    int max = INT_MIN, tempSum = 0;
    for (int i = 0; i < n; i++){
        tempSum += arr[i];
        if (tempSum > max) max = tempSum;
        if (tempSum < 0) tempSum = 0;
    }
    return max;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int arr[] = {1, 2, 3, 5, 0, 9, 3, 5, 9};
    cout << "Result with dp: " << maxSubsetSum(arr, sizeof(arr)/sizeof(arr[0])) << endl;
    cout << "Result with kadane's: " << maxSubArray(arr, sizeof(arr)/sizeof(arr[0])) << endl;
    return 0;
}