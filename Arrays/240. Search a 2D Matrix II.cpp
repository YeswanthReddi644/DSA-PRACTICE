link :https://leetcode.com/problems/search-a-2d-matrix-ii/?utm_source=chatgpt.com
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n = matrix.size();// number of rows in the matrix
        int m = matrix[0].size();// number of coloumns in the matrix 

        int i = 0;
        int j = m - 1;

        while (i < n && j >= 0) {

            if (matrix[i][j] == target) {
                return true;
            }
            else if (matrix[i][j] > target) {
                j--;//go left
            }
            else {
                i++;//go right
            }
        }

        return false;
    }
};
