using namespace std;
#include <iostream>
#include <unordered_set>
#include <vector>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> dups = {}; 
        for (int i = 0; i < nums.size(); i++) {
            dups.insert(nums[i]);
        }
        if (dups.size()< nums.size())
            return true;
        return false;
    }
};