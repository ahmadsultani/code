#include <bits/stdc++.h>
using namespace std; 

int presicion(float);

float binarySquareRoot(float, float);

int main() {
    float num = 2;

    //step used to determine how precise the answer is
    float step = 0.1;

    //using binary search to find the square root
    binarySquareRoot(num, step);

    int floatingPoints = precision(step);
    cout << setprecision(floatingPoints) << right;
    return 0;
}

int precision(float number) {
    int res = 0;
    while (number <= 1) {
        number *= 10.0;
        res++;
    }
    return res;
}

float binarySquareRoot(float number, float step){
    float left = 0, right = number-step;
    while (left <= right) {
        float mid = left + (right-left)/2; //tips to avoid out of range number
        if (mid*mid == number) cout << mid;
        else if (mid*mid < number) left = mid+step;
        else right = mid-step;
    }
}