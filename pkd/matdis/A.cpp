// Penjumlahan Pecahan
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); //fast I/O
  long long a, b, c, d;
  cin >> a >> b >> c >> d;
  long long numerator = a*d + b*c;
  long long denominator = b*d;
  long long gcd = __gcd(numerator, denominator);
  cout << numerator/gcd << " " << denominator/gcd;
  cout << "\n";
  return 0;
}