class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
            
// Gap Method
        for(int i=m; i<n+m; i++){
            nums1[i] = nums2[i-m];
        }

        int len = n+m;
        int gap = (len/2) + (len%2);

        while(gap>0){
            int left = 0; 
            int right = left + gap;

            while(right < (m+n)){
                if(nums1[left] > nums1[right]){
                    swap(nums1[left] , nums1[right]);
                }
                left++;
                right++;
            }
            if(gap == 1) break;
            gap = (gap/2) + (gap%2);
        }
    
        
        
//         int left = m-1;
//         int right = 0;

//         while(left>=0 && right<n){
//             if(nums1[left] > nums2[right]){
//                 swap(nums1[left], nums2[right]);
//                 left--;
//                 right++;
//             }
//             else{
//                 break;
//             }
//         }
//         sort(nums1.begin(), nums1.begin()+m);
//         sort(nums2.begin(), nums2.end());

// // Merged both arrays 
//         for(int i=m; i<n+m; i++){
//             nums1[i] = nums2[i-m];
//         }
    }
};