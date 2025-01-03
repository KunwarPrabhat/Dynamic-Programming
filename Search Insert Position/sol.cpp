//Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
//You must write an algorithm with O(log n) runtime complexity.

// Example 1:
// Input: nums = [1,3,5,6], target = 5
// Output: 2
  
// Example 2:
// Input: nums = [1,3,5,6], target = 2
// Output: 1
  
// Example 3:
// Input: nums = [1,3,5,6], target = 7
// Output: 4
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int result = binarySearch(nums, 0, nums.size()-1, target );
        return result;
    }
    int binarySearch(vector<int>& nums, int low, int high, int x){
        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(nums[mid] == x)
                return mid;

            if(nums[mid] < x)
                low = mid +1;
            
            else{
                high = mid-1;
            }
        }
        return low;
    }
};
