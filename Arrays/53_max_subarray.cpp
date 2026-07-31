/*
LeetCode 53 - Maximum Subarray

Difficulty: Easy

Approach:
Use Kadane's Algorithm to find the maximum sum of a contiguous subarray.
Keep track of the current subarray sum and reset it whenever it becomes negative.
Update the maximum sum encountered during the traversal.

Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum=nums[0];
        int maxSum=nums[0];
        for(int i=1;i<nums.size();i++){
            currentSum=max(nums[i],currentSum+nums[i]);
            maxSum=max(maxSum,currentSum);
        }
       return maxSum; 
    }
};