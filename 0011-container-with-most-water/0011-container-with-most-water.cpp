class Solution {
public:
    int maxArea(vector<int>& height) {
      int maxArea = 0;
      int i= 0;
      int j = height.size() - 1;

      while(i<j){
        int temp = (min(height[i], height[j])) * (j-i);
        maxArea = max(maxArea , temp);
        
        if(height[i] < height[j]){
            i++;
        }
        else{
            j--;
        }
      }  
      return maxArea; 
    }
};