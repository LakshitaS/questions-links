// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// You must write a solution in O(log(m * n)) time complexity.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int> >& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int i=0;int j=row*col-1;
        int mid=i +(j-i)/2;
        while(i<=j){
            int el=matrix[mid/col][mid%col];
            if(el==target){
                return true;
            }
            if(el<target){
                i=mid+1;
            }else{
                j=mid-1;
            }     
            mid=i +(j-i)/2;       
        }
        
        return 0;
    }
};
 
