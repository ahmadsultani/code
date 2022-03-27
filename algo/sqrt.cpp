#include <bits/stdc++.h>
using namespace std;

int precision(float number) {
    int res = 0;
    while (number <= 1) {
        number *= 10.0;
        res++;
    }
    return res;
}

int main() {
    float num = 2;

    //determine how precise the answer is
    float step = 0.1;

    //using binary search to find the square root
    float left = 0, right = num-step;
    while (left <= right) {
        //tips to avoid number out of range
        float mid = left + (right-left)/2; 
        if (mid*mid == num) cout << mid;
        else if (mid*mid < num) left = mid+step;
        else right = mid-step;
    }

    int floatingPoints = precision(step);
    cout << setprecision(floatingPoints) << right;
    return 0;
}