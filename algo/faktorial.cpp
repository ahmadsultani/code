#include <bits/stdc++.h>
using namespace std;
 
int fact(int num) {
    if (num == 1 || num == 0) return 1;
    return num * fact(num-1);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    return 0;
}