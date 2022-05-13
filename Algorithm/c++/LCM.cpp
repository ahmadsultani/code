#include <bits/stdc++.h> //finding LCM of n number
typedef long long ll;
using namespace std;

int gcd (int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll lcm (int arr[], int len) {
    ll res = arr[0];
    for (int i = 1; i < len; i++) {
        res *= arr[i]/gcd(res, arr[i]);
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << lcm(arr, n);
    return 0;
}