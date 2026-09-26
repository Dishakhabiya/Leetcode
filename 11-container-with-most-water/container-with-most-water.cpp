class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int area= min(height[i],height[j]) * (j-i);
        int maxarea=area;
        while(i<j){
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
            area = (min(height[i],height[j]) * (j-i));
            maxarea=max(maxarea,area);
        }
        return maxarea;
    }
};