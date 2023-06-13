//Given an array nums with n objects colored red, white, or blue, 
//sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

//3pointer solution 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low =0; 
        int high = nums.size()-1;
        int mid =0;
        
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
