class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0, left=0, right=0, i=0, j=height.size()-1;
        while(i<j){
            if(height[i]<=height[j]){
                if(left>height[i]){
                    ans=ans+left-height[i];
                }
                else{
                    left=height[i];
                }
                i++;
            }
            else{
                if(right>height[j]){
                    ans=ans+right-height[j];
                }
                else{
                    right=height[j];
                }
                j--;
            }
        }
        return ans;
    }
};