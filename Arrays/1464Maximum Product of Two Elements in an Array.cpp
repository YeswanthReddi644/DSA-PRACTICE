https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/submissions/2038316728/?utm_source=chatgpt.com


class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int first=0;
       int second=0;
       for(int num:nums){
        if(num>first){
            second=first;
            first=num;
        }else if(num>second){
            second=num;
        }
       }
       return (first-1)*(second-1);
    }
};
