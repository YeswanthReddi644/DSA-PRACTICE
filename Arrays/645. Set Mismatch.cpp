link:https://leetcode.com/problems/set-mismatch/description/
efficient code :

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> freq(n + 1, 0);
        
        // Count frequency
        for(int num : nums) {
            freq[num]++;
        }
        
        int duplicate = -1;
        int missing = -1;
        
        // Find duplicate and missing
        for(int i = 1; i <= n; i++) {
            
            if(freq[i] == 2) {
                duplicate = i;
            }
            
            if(freq[i] == 0) {
                missing = i;
            }
        }
        
        return {duplicate, missing};
    }
};


Optimized code:(cyclic sort)


class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int i = 0;
        int n = nums.size();

        while(i < n) {
            
            int correct = nums[i] - 1;

            // swap if number not at correct position
            if(nums[i] != nums[correct]) {
                swap(nums[i], nums[correct]);
            }
            else {
                i++;
            }
        }

        // find mismatch
        for(int i = 0; i < n; i++) {
            
            if(nums[i] != i + 1) {
                return {nums[i], i + 1};
            }
        }

        return {};
    }
};


