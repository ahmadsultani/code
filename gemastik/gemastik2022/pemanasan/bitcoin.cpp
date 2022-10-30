#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); //fast I/O
  int ans = 0, N;
  cin >> N;
  int arr[N];
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }
  // kadanes
  for (int i = 1; i < N; i++) {
    ans += max(0, arr[i] - arr[i-1]);
  }
  cout << ans << "\n";
  return 0;
}