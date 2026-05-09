link:https://leetcode.com/problems/convert-1d-array-into-2d-array/ 
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {

        // Check if construction is possible
        if(original.size() != m * n) {
            return {};
        }

        vector<vector<int>> ans(m, vector<int>(n));//vector<vector<int>>--> means vector inside vector i.e 2D vector   is created 

        int index = 0;

        for(int i = 0; i < m; i++) {

            for(int j = 0; j < n; j++) {

                ans[i][j] = original[index];
                index++;

            }
        }

        return ans;
    }
};
