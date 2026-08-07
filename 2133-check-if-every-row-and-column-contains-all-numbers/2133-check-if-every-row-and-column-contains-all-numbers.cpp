class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for (int i = 0; i < n; i++) {
            unordered_set<int> rowSet;
            unordered_set<int> colSet;

            for (int j = 0; j < n; j++) {
                if (rowSet.count(matrix[i][j])) return false;
                rowSet.insert(matrix[i][j]);

                if (colSet.count(matrix[j][i])) return false;
                colSet.insert(matrix[j][i]);
            }
        }

        return true;
    }
};