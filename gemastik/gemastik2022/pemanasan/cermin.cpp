#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); //fast I/O
  string s;
  cin >> s;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int op;
    cin >> op;
    if (op == 1) {
      int x;
      char c;
      cin >> x >> c;
      s[x] = c;
    } else {
      int a, b, ans = 0;
      cin >> a >> b;
      vector<string> prefix;
      for (int j = 0; j <= b+1; j++) {
        prefix.push_back(s.substr(a, j));
      }

      int mulai = b+1;
      for (int j = 0; j <= b+1; j++) {
        string temp = s.substr(mulai--, j);
        reverse(temp.begin(), temp.end());
        if (temp == prefix[j]) {
          ans = j;
        }
      }

      cout << ans << "\n";
    }
  }
  cout << "\n";
  return 0;
}