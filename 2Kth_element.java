
//this first solution of kth element the time complexity of this solution O(Nlogn).
class Solution {
    public int findKthLargest(int[] nums, int k) {
        Arrays.sort(nums);
        return nums[nums.length-k];
        
    }
}
