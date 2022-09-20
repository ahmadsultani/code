#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool containsDuplicate(vector<int> &nums, int k) {
    unordered_set<int> set;
    for (int i = 0; i < nums.size(); i++) {
      set.insert(nums[i]);
      if (set.count(nums[i]) > 1) return true;
    }
    return false;
  }
};