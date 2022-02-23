class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int tempSum = 0;
        for(int i = 0;i<nums.size();i++){
            tempSum+=nums[i];
            nums[i] = tempSum;
        }
        return nums;
    }
};
