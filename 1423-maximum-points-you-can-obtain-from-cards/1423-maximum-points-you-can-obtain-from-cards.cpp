class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0,  mxsum = 0;
        for(int i=0; i<k; i++){
            sum += nums[i];
        }
        mxsum = sum;

        for(int i=0; i<k; i++){
            sum = sum - nums[k-1-i];
            sum = sum + nums[n-1-i];
            mxsum = max(mxsum , sum);
        }
        return mxsum;
    }
};