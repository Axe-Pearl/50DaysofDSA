class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum = 0, rightSum = 0;
        int ans = -1;
        for(int val: nums){
            rightSum+=val;
        }
        for(int i = 0;i<nums.size();i++){
            rightSum-=nums[i];
            if(leftSum == rightSum){
                ans = i;
                break;
            }
            leftSum+=nums[i];
        }
        return ans;
    }
};
