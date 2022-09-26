#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); //fast I/O
  int jug1, jug2, target;
  cin >> jug1 >> jug2 >> target;
  if (target > max(jug1, jug2)) {
    cout << "No solution" << endl;
    return 0;
  } else if (target % __gcd(jug1, jug2) != 0) {
    cout << "No solution" << endl;
    return 0;
  }
  int a = jug1, b = 0, step = 1;
  while (a != target) {
    int temp = min(a, jug2 - b);
    a -= temp;
    b = b + temp % jug2;
    cout << a << " " << b << endl;
    cout << "Isi b dan kurangkan a dengan " << temp << endl;
    step++;
    if (a == target) break;
    if (a == 0) {
      a = jug1;
      cout << "Isi penuh a: " << a << " " << b << endl;
      step++;
    }
    if (b == jug2) {
      b = 0;
      cout << "Kosongkan b:" << a << " " << b << endl;
      step++;
    }
  }
  cout << step;
  cout << "\n";
  return 0;
}