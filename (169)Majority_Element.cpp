class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mj = nums.size()/2;
        map<int,int> mp;
        int ans = 0;
        int maxi = INT_MIN;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++;
            if(maxi < mp[nums[i]]){
                maxi = mp[nums[i]];
              if(maxi > mj){
                ans = nums[i];
              }
            }
        }
        return ans;
    }
};
