class Solution {
public:
    int maxArea(vector<int>& height) {
       int area=0,maxarea=0;
        int p=0,q=height.size()-1;
        while(p!=q){
            area = (q-p)*min(height[p],height[q]);
            maxarea = max(area,maxarea);
            if(height[p]<height[q]){
                p++;
            }
            else{
                q--;
            }
        }
        return maxarea;
    }
};
