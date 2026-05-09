link:https://leetcode.com/problems/reshape-the-matrix/?utm_source=chatgpt.com
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

        int m = mat.size();
        int n = mat[0].size();

        // Check if reshape is possible
        if (m * n != r * c) {
            return mat;
        }

        vector<vector<int>> ans(r, vector<int>(c));
        

        for (int k = 0; k < m * n; k++) {

            ans[k / c][k % c] = mat[k / n][k % n];
        }

        return ans;
    }
};
