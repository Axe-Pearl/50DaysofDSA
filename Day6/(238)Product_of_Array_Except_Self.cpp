class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n = nums.size();
       vector<int> left(n+2);
       vector<int> right(n+2);
       left[0] = 1;
       right[n-1] = 1;
        
       for(int i = 1;i<nums.size();i++){
          left[i] = left[i-1]* nums[i-1];
          right[n-1-i] = right[n-1-(i-1)]* nums[n-1-(i-1)];
       }
      
       for(int i = 0;i<nums.size();i++){
             nums[i] = left[i]*right[i];
       }
       return nums;
    }
};
