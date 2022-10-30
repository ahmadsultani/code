#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); //fast I/O
  string a, b;
  cin >> a >> b;
  for (int i = 0; i < a.length(); i++) {
    string temp = a;
    temp.erase(i, 1);
    if (temp == b) {
      cout << "Tentu saja bisa!" << "\n";
      return 0;
    }
  }
  cout << "Wah, tidak bisa :(" << "\n";
  return 0;
}