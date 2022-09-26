#include <bits/stdc++.h>
#define MOD 10e9+7
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>
typedef long long ll;
typedef long double ld;
using namespace std;

int reverse(int n) {
    int res = 0;
    while (n) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0); //fast I/O
  int n, temp, start=0;
  cin >> n;
  vi a, res, zeros;
  while (n--) {
    cin >> temp;
    a.pb(temp);
  }

  for (int i = 0; i < a.size(); i++) {
    if (a[i] % 10 == 0) {
      zeros.pb(a[i]);
    } else if (a[i] < 10) {
      res.pb(a[i]*10);
    } else {
      res.pb(reverse(a[i]));
    }
  }

  sort(res.begin(), res.end());
  sort(zeros.begin(), zeros.end());

  for (int i : zeros) {
    cout << i << endl;
  }

  for (int i : res) {
    cout << (i % 10 == 0 ? i/10: i) << endl;
  }

  cout << "\n";
  return 0;
}