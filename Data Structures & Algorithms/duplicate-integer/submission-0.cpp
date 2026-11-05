class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> num_to_amount;
        for (int i = 0; i < nums.size(); i++) {
            num_to_amount[nums.at(i)]++; 
            if (num_to_amount[nums.at(i)] > 1)
                return true;
        }
        return false;
        // int num, amount;
        // cin >> key >> val;
        // mp_demo[key] = val;

        // mp_demo[2] = 9;

    }
};
