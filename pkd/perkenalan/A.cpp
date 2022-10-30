// Seleksi Olimpiade
#include <bits/stdc++.h>
using namespace std;

bool compare(pair<pair<int, int>, pair<int, string>> a, pair<pair<int, int>, pair<int, string>> b) {
  if (a.first.first > b.first.first) return true;
  if (a.first.first < b.first.first) return false;
  if (a.first.second > b.first.second) return true;
  if (a.first.second < b.first.second) return false;
  if (a.second.first > b.second.first) return true;
  if (a.second.first < b.second.first) return false;
  if (a.second.second < b.second.second) return true;
  if (a.second.second > b.second.second) return false;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0); //fast I/O
  int T;
  cin >> T;
  while (T--) {
    int N, M, idx;
    string id;
    cin >> N >> M;
    cin >> id;
    vector<pair<pair<int, int>, pair<int,string>>> participants;

    for (int i = 0; i < N; i++) {
      int t3, t2, t1;
      string name;
      cin >> name >> t1 >> t2 >> t3;
      participants.push_back({{t3, t2}, {t1, name}});
    }

    sort(participants.begin(), participants.end(), compare);
    
    for (int i = 0; i < N; i++) {
      if (participants[i].second.second == id) {
        idx = i;
        break;
      }
    }

    if (idx <= M-1) {
      cout << "YA" << "\n";
    } else {
      cout << "TIDAK" << "\n";
    }
  } 
  cout << "\n";
  return 0;
}