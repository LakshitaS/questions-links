//Maths

// There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the 
// bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.Given the two integers m and n,
// return the number of possible unique paths that the robot can take to reach the bottom-right corner.

class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m <=0 || n <= 0) return 0;
        long long res = 1;
        for(int i = n; i < m+n-1 ; i++){
            res = res * i / (i- n + 1);
        }
        return (int)res;        
    }
};
