#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); //fast I/O
  int N, M;
  cin >> N;
  while (N--){
    cin >> M;
    int x, y, k;
    x = y = k = 0;
    while (M > 0) {
      k++;
      for (int i = 1; i <= k; i++) {
        if (M <= 0) break;
        if (k % 4 == 1) {
          x++;
        } else if (k % 4 == 2) {
          y++;
        } else if (k % 4 == 3) {
          x--;
        } else if (k % 4 == 0) {
          y--;
        }
        M--;
      }
    }
    cout << x << " " << y << "\n";
  }
  cout << "\n";
  return 0;
}