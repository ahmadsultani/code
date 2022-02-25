#include <iostream>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int num, power, res = 1;
    cin >> num >> power;
    for (int i = 1; i <= power; i++) res *= num;
    cout << res << endl;
    return 0;
}