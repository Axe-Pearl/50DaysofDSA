class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       unordered_map<int,int> left;
       unordered_map<int,int> right;
       int tempProduct = 1;
       left[-1] = 1;
       right[nums.size()] = 1;
       for(int i = 0;i<nums.size();i++){
           tempProduct *= nums[i];
           left[i] = tempProduct;
       }
       tempProduct = 1;
       for(int i = nums.size()-1;i>=0;i--){
             tempProduct *= nums[i];
             right[i] = tempProduct;
       }
       for(int i = 0;i<nums.size();i++){
             nums[i] = left[i-1]*right[i+1];
       }
       return nums;
    }
};
