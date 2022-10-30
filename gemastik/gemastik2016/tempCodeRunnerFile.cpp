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
      gProduct *= participants[i].g;
    }
    participants.erase(participants.begin(), participants.begin() + 2);
    sort(participants.begin(), participants.end(), [](Participant a, Participant b) {
      return a.c > b.c;
    });
    for (int i = 0; i <= 2; i++) {
      chosenC.push_back(participants[i].name);
      cProduct *= participants[i].c;
    }
    power = gProduct + cProduct;
    cout << power << "\n";
    for (string name: chosenG) {
      cout << name << " ";
    }
    cout << "\n";
    for (string name: chosenC) {
      cout << name << " ";
    }
    cout << "\n";
  }
  cout << "\n";
  return 0;
}