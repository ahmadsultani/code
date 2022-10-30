#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); //fast I/O
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    int maxHeight = 0, minHeight = 0, A, B, C;
    while (N--) {
      cin >> A >> B >> C; 
      maxHeight += max(A, max(B, C));
      minHeight += min(A, min(B, C));
    }
    cout << minHeight << " " << maxHeight << "\n";
  }
  cout << "\n";
  return 0;
}