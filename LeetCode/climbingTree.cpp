class Solution {
public:
  int climbStairs(int n) {
    int f0 = 0, f1 = 1;
    for (int i = 0; i < n; i++) {
      int temp = f0;
      f0 = f1;
      f1 += temp;
    }
    return f1;
  }
};