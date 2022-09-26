#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  string str = "123";
  int num = 0;
  for (int i = 0; i < str.length(); i++) {
      num = num * 10 + (str[i] - '0');
  }
  cout << num << endl;
  return 0;
}