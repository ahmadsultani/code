#include <bits/stdc++.h>
using namespace std;

int main() {
    int val = 20;
    int coins[] = {1, 3, 5, 6, 9};
    int n = sizeof(coins)/sizeof(coins[0]);
    vector<int> ans;
    for(int i = n-1; i >= 0; i--) {
        while(val >= coins[i]){
            val -= coins[i];
            ans.push_back(coins[i]);
        }
    }
    for (int i: ans) cout << i << " ";
    return 0;
}