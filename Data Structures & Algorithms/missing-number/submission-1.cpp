class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int realSum = 0;
        int sum = 0;
        for (int i = 0; i <= nums.size(); i++) {
            realSum += i;
        }
        for (int i = 0; i < nums.size(); i++) {
            sum += nums.at(i);
        }
        return realSum - sum;
    }
    //you add all the numbers from 0 - n (part 1)
    //you add all the numbers in the vector (part 2)
    //subract part 1 - part 2 = the missing number
};
