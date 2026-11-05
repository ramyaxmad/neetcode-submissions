class Solution {
public:
    bool isAnagram(string s, string t) {
        //s.find() != s.end(), exists within set
        if (s.size() != t.size())
            return false;
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        for (int i = 0; i < t.size(); i++) {
            if (mp.find(t[i]) == mp.end() || mp[t[i]] == 0)
                return false;
            mp[t[i]]--;
        }
    }
};
