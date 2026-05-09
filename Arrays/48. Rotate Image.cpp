link:https://leetcode.com/problems/rotate-image/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //step:1 transpose the matrix we have used the in place algorithm
        //In place algorithm means ::
        //we dont need the extar array or matrix or space to do operations like swaping etc.. we do operations directly on the give array or matrix . It will reduce the menory space.
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        // Step 2: Reverse each row
        for(int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
