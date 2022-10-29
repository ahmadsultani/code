#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); //fast I/O
  int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127};
  int N;
  cin >> N;
  long long A[N], B[N];
  for (long long i = 0; i < N; i++) {
    cin >> A[i] >> B[i];
  }

  for (int idx = 0; idx < N; idx++) {
    long long count = 0;
    for (long long i = 2; i <= B[idx]; i++) {
      bool isValid = false;
      for (int j : primes) {
        if (j > A[idx] || j > i) break;
        if (i % j != 0) {
          isValid = true;
        } else {
          isValid = false;
          break;
        }
      }
      if (isValid) {
        count++;
      }
    }
    cout << count << "\n";
  }
  cout << "\n";
  return 0;
}