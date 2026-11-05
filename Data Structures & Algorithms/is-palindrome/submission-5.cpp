#include <array>
class Solution {
public:
    bool isPalindrome(string s) {
        string newS = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 65 && s[i] <= 90) //A-Z 65-90 
                s[i] += 32;
            if ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57)) //a-z 97-122, 0-9 48-57
                newS += s[i];
        }
        if (newS.size() == 1)
            return true;
        int length = newS.size();
        for (int i = 0; i < newS.length(); i++){
            if (newS[i] != newS[newS.size() - 1 - i])
                return false;
        }
        return true;
    }
};
