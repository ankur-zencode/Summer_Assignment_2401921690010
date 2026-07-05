class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

        int m = mat.size();
        int n = mat[0].size();

        if (m * n != r * c)
            return mat;

        vector<vector<int>> ans(r, vector<int>(c));

        int newRow = 0;
        int newCol = 0;

        for (int i = 0; i < m; i++) {

            for (int j = 0; j < n; j++) {

                ans[newRow][newCol] = mat[i][j];

                newCol++;

                if (newCol == c) {
                    newCol = 0;
                    newRow++;
                }
            }
        }

        return ans;
    }
};