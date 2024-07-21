class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    //     int n = nums.size();
    //    sort (nums.begin(), nums.end()); 
    // //    int i =0;
    // int ans;
    //    for( int i = 0; i<n-1; i++){
    //        if(nums[i] == nums[i+1]){
    //             ans = nums[i];
    //            break;
    //        }
    //    }
    //    return ans;

  //  positioning method

   while(nums[0] != nums[nums[0]]){
       swap(nums[0], nums[nums[0]]);
   }
   return nums[0];
    }
};