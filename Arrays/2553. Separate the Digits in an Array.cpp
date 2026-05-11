class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for (int num : nums) {
            string s = to_string(num);//it is used to convert the number into the character.

            for (char ch : s) {
                ans.push_back(ch - '0');//whenever if we want to convert the character into the numbner then sub ch from 0 i.e ch-'0';
            }
        }

        return ans;
    }
};
