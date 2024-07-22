class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    
        sort(a.begin(), a.end());
        
        long long mini = INT_MAX;
        for(int i=0; i<n-m+1; i++){
            long long diff = a[m-1+i] - a[i];
            mini = min(mini, diff);
        }
        return mini;
    }   
};
