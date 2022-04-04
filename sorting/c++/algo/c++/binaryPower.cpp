#include <bits/stdc++.h>
using namespace std;

int binaryPower(int base, int power) {
    if (power == 0) return 1;
    int temp = binaryPower(base, power/2); 
    int res = temp * temp;
    if (power % 2 == 1) res *= base;
    return res;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int num, power, res = 1;
    cin >> num >> power;
    cout << binaryPower(num, power) << endl;
    while (power) {
        if (power % 2 == 1) res *= num;
        num *= num;
        power /= 2;
    }
    cout << res;
    return 0;
}