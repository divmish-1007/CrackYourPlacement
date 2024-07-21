class Solution {
public:
    int removeDuplicates(vector<int>& arr) {

        int j = 0, i = 1;
        while(i<arr.size()){
            if(arr[j] == arr[i]) i++;
           // else arr[++j] = arr[i++];
            else{
                j++;
                arr[j] = arr[i];
                i++;
            }
        }
        return j+1;
        // int i =0;
        // for(int j =1; j< nums.size(); j++){
        //     if(nums[j] != nums[i]){
        //         nums[i+1] = nums[j];
        //         i++;
        //     }

        // }
        // return i+1;
    }
};