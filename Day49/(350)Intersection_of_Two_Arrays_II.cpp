class Solution {
public:
    vector<int> solve(vector<int>& nums1, vector<int>& nums2,vector<int>& res, int i, int j) {
        if(i < 0 || j < 0){
            return res;
        }
        if(nums1[i]==nums2[j]){
            res.push_back(nums1[i]);
            return solve(nums1,nums2,res,--i,--j);
        }
        else if(nums1[i]>nums2[j]){
            return solve(nums1,nums2,res,--i,j);
        }
        else if(nums1[i]<nums2[j]){
            return solve(nums1,nums2,res,i,--j);
        }
        return res;
    }
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> res;
        int i = nums1.size()-1, j = nums2.size()-1;
        return solve(nums1,nums2,res,i,j);
    }
};
