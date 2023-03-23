class Solution{
    public:
    long long maximumAmount(int arr[], int n){
        // Your code here
        vector<vector<long long>> dp(n,vector<long long>(n,0));
        for(int i=0;i<n-1;i++){
            dp[i][i+1]= max(arr[i],arr[i+1]);
        }
        
        for(int i=3;i<n;i++){
            for(int j=0;j+i<n;j++){
                int k= i+j;
        dp[j][k]= max(arr[j]+min(dp[j+2][k],dp[j+1][k-1]), arr[k]+min(dp[j][k-2],dp[j+1][k-1]));
            }
        }
        
        return dp[0][n-1];
    }
};
