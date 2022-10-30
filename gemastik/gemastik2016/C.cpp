#include <bits/stdc++.h>
using namespace std;

struct Participant {
  string name;
  int g, c;
};

int main() {
  ios::sync_with_stdio(0); cin.tie(0); //fast I/O
  int T, N;
  cin >> T;
  while (T--) {
    cin >> N;
    int power = 0, gProduct = 1, cProduct = 1;
    vector<Participant> participants;
    vector<string> chosenG, chosenC;
    while (N--) {
      Participant p;
      cin >> p.name >> p.g >> p.c;
      participants.push_back(p);
    }
    sort(participants.begin(), participants.end(), [](Participant a, Participant b) {
      return a.g > b.g;
    });
    for (int i = 0; i <= 2; i++) {
      chosenG.push_back(participants[i].name);
    }
    sort(participants.begin(), participants.end(), [](Participant a, Participant b) {
      return a.c > b.c;
    });
    cout << "\n";
  }
  cout << "\n";
  return 0;
}