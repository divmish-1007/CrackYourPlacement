class Solution {
public:
    int count = 0;
    void merge(vector<int> &nums, int low, int mid, int high){
        int left = low;
        int right = mid + 1;

        vector<int> temp;

        while(left <= mid && right <= high){
            if(nums[left] <= nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(nums[right]);
            right++;
        }

        for(int i=low; i<=high; i++){
            nums[i] = temp[i-low];
        }
    }

    void countPairs(vector<int> &nums, int low, int mid, int high){
        int right = mid+1;
        for(int i=low; i<=mid; i++){
            while(right<=high && nums[i] > (long long)2*nums[right]) right++;
            count += (right - (mid+1));
        }
    }

    void mergeSort(vector<int> &nums, int low, int high){
        if(low >= high) return;
        int mid = (low + high)/2;
        mergeSort(nums, low, mid);
        mergeSort(nums, mid+1, high);
        countPairs(nums, low, mid, high);
        merge(nums, low, mid, high);
    }

    int reversePairs(vector<int>& nums) {
        int n = nums.size();
       mergeSort(nums, 0, n-1);
       return count;
    }
};