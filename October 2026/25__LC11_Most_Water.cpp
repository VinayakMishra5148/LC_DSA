class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int smallbuild;  

        // smaller building limit karti hai area ko, hence we need to find it as min b/w left and right
        int width;
        int area;
        int maxarea = 0;

        while(left<right){
            width = right - left;
            smallbuild = min(height[left],height[right]);
            area = width*smallbuild;

            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }

            if(area>maxarea){
                maxarea = area;
            }
        }return maxarea;
    }
};