class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<int> v;
       v.push_back(a[0]);
       for(int i=1;i<n;i++){
           if(v.back()>=a[i]){
               int x= lower_bound(v.begin(),v.end(),a[i])-v.begin();
               if(x==v.size()){
                   x-=1;
               }
               v[x]=a[i];
           }
           else{
               v.push_back(a[i]);
           }
       }
       return v.size();
    }
};
