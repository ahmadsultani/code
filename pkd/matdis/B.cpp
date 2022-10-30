// find k-th prime
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); //fast I/O
  int T;
  cin >> T;
  int K[T];
  for (int i = 0; i < T; i++) {
    cin >> K[i];
  }
  int maks = *max_element(K, K+T);
  vector<int> primes;
  primes.push_back(2);
  int i = 3;
  while (primes.size() < maks) {
    bool isPrime = true;
    for (int j = 0; j < primes.size(); j++) {
      if (i % primes[j] == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime) {
      primes.push_back(i);
    }
    i++;
  }
  for (int i = 0; i < T; i++) {
    cout << primes[K[i]-1] << "\n";
  }
  cout << "\n";
  return 0;
}