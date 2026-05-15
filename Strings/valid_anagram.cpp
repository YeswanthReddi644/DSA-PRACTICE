link :https://leetcode.com/problems/valid-anagram/
class Solution {
public:
    bool isAnagram(string s, string t) {

        // Step 1: lengths must be same
        if(s.size() != t.size()) {
            return false;
        }

        // Step 2: frequency array
        int count[26] = {0};

        // Step 3:
        // increase for s
        // decrease for t
        for(int i = 0; i < s.size(); i++) {

            count[s[i] - 'a']++;

            count[t[i] - 'a']--;
        }

        // Step 4:
        // all counts should become 0
        for(int i = 0; i < 26; i++) {

            if(count[i] != 0) {
                return false;
            }
        }

        return true;
    }
};
