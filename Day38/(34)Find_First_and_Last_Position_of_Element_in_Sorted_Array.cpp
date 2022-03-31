class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int p = 0, q =  nums.size()-1;
        vector<int> v{-1,-1};
        while(p <= q){
            if(nums[p] == target && nums[q]==target){
                v.clear();
                v.push_back(p);
                v.push_back(q);
                return v;
            }
            if(nums[p]!=target){p++;}
            if(nums[q]!=target){q--;}
            
        }
        return v;
    }
};
