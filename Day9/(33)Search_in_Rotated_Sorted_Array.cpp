class Solution {
public:
    int finalAns(vector<int>& nums, int target,int l, int r){
        while(l<=r){
            int m = l+(r-l)/2;
            if(nums[m] == target){
                return m;
            }
            else if(nums[m]<target){
                l = m+1;
            }
            else if(nums[m]>target){
                r = m-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1;
        int pivot = -1;
        while(l<=r){
            int mid = l+(r-l)/2;
            int prev = (mid+n-1)%n, next = (mid+1)%n;
            if(nums[mid]<=nums[prev] && nums[mid]<=nums[next]){
                pivot = mid;
                break;
            }
            else if(nums[mid]<=nums[r]){
                r = mid-1;
            }
             else if(nums[mid]>=nums[l]){
                l = mid+1;
            }
        }
        int ans = -1;
        if(pivot == -1){
            l = 0, r = n-1;
            ans = finalAns(nums,target,l,r);
        }
        else if(nums[pivot] == target){
            return pivot;
        }
        else if(target>=nums[pivot] && target<=nums[n-1]){
            l = pivot, r = n-1;
            ans = finalAns(nums,target,l,r);
        }
        else{
             l = 0, r = pivot;
            ans = finalAns(nums,target,l,r);
        }
        return ans;
    }
};
