class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water=0;
        int i=0, j=height.size()-1;
        while(i<j){
            int width=j-i;
            int min_height=min(height[i], height[j]);
            int area=min_height*width;
            max_water=max(max_water, area);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return max_water;
    }
};