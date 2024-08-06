class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<int, int> mpp;
        int ans;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(auto i=mpp.begin(); i!=mpp.end(); i++){
            if(i->second > (n/2)){
                ans = i->first;
            }
        }
        return ans;
        
    //     int ans = -1;
    //      unordered_map<int, int>hash;
    //     for(int i =0; i<nums.size(); i++){
    //         hash[nums[i]]++;
    // }
    // for(int i = 0; i<nums.size(); i++){
    //     if(hash[nums[i]] > (nums.size()/2)){
    //         ans = nums[i];
    //     }
    // }
    // return ans;
    }
};