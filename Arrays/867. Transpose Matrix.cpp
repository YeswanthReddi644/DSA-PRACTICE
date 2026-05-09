link:https://leetcode.com/problems/transpose-matrix/submissions/1998675855/?utm_source=chatgpt.com
class Solution {
public:

    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<vector<int>> ans(cols, vector<int>(rows));

        for(int i = 0; i < rows; i++) {

            for(int j = 0; j < cols; j++) {

                ans[j][i] = matrix[i][j];

            }
        }

        return ans;
    }
};
