// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
// Example 1:

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]


// APPROACH 1 : Reversal of array

// Reverse the whole array.
// Then reverse the first k elements.
// Finally reverse the remaining elements.
// (Do a dry run, it's very easy to understand)
// Time Complexity : O(n)

// Space Complexity : O(1)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        
    }
};

// APPROACH 2 : Rotate k times

// Rotate all the elements by 1 position k times.
// Time Complexity : O()

// Space Complexity : O(1)

// Code :

class Solution {
public:
	void rotateByOne(vector<int> &nums){
		int n = nums.size(), temp = nums[n-1];
		for(int i=n-1; i>0; i--){
			nums[i] = nums[i-1];
			nums[0] = temp;
		}
	}
    void rotate(vector<int>& nums, int k) {
        for(int i=0; i<k; i++) rotateByOne(nums);
    }
};
