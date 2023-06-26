//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.


//USING BITWISE XOR OPERATOR (USING CONSTANT SPACE )
class Solution {
public:
    int singleNumber(vector<int>& nums) { 
       int ans=0;
	   for(auto x:nums)
	   ans^=x;
	   return ans;
    }
};
