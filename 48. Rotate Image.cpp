// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> arr(n, vector<int>(n, 0));
        // int i=0;j=0;
        int k=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int x=matrix[i][j];
                arr[j][n-k]=x;
            }
            k++;
        }
        matrix=arr;
    }
};
