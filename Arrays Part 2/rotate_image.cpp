class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        if (matrix.size() == 0 || matrix.size() == 1)
            return;
        rotateMatrix(matrix, 0, 0, matrix[0].size());
    }
    // Recursion function, (x,y) is the coordinate of the Top-Left point.
    // n is the size of current matrix.
    void rotateMatrix(vector<vector<int>> &matrix, int x, int y, int n)
    {
        if (n == 1 || n == 0)
            return;
        vector<int> temp1(n - 1);
        vector<int> temp2(n - 1);
        vector<int> temp3(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            temp1[i] = matrix[x + i][y + n - 1];
            temp2[i] = matrix[x + n - 1][y - i + n - 1];
            temp3[i] = matrix[x - i + n - 1][y];
        }

        for (int i = 0; i < n - 1; i++)
        {
            matrix[x + i][y + n - 1] = matrix[x][y + i];
            matrix[x + n - 1][y - i + n - 1] = temp1[i];
            matrix[x - i + n - 1][y] = temp2[i];
            matrix[x][y + i] = temp3[i];
        }
        // Update coordinate of Top-Left point to continue recursion.
        // Each recursion,the matrix getting smaller by 2 (left col and right col), so it's n-2.
        rotateMatrix(matrix, x + 1, y + 1, n - 2);
    }
};