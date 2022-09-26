#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool isValid(string s) {
    stack<char> st;
    for (auto i : s) {
      if (i == '(' || i == '{' || i == '[') st.push(i);
      else {
        if (st.empty()) return false;
        else if (st.top() != '(' && i == ')') return false;
        else if (st.top() != '[' && i == ']') return false;
        else if (st.top() != '{' && i == '}') return false;
        st.pop();
      }
    }
    return st.empty();
  }
};

int main() {
  ios::sync_with_stdio(0); cin.tie(0); //fast I/O
  Solution solve = Solution();
  string s = "([)]";
  cout << s << endl;
  if (solve.isValid(s)) {
    cout << "Valid";
  } else {
    cout << "Invalid";
  }
}