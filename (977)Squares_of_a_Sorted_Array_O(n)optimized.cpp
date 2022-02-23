class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      int l = 0, r = nums.size()-1;
      vector<int> res(nums.size());
      int k = res.size()-1;
        
      while(l<=r){
          if(abs(nums[l])<=abs(nums[r])){
              res[k] = nums[r]*nums[r];
              r--;
              k--;
          }
          else if(abs(nums[l])>abs(nums[r])){
              res[k] = nums[l]*nums[l];
              l++;
              k--;
          }
      }
     return res;
    }
};
