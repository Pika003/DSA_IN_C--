class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        vector<int> v;
        int st = 0;
        int e = 0;
        int sum = 0;
        int i=0;
        if(s == 0){
            return {-1};
        }
        while(e<=n){
            if(sum == s){
                v.push_back(st+1);
                v.push_back(e);
                return v;
            }else if(sum < s){
                sum += arr[i++];
                e++;
            }else{
                sum -= arr[st];
                st++;
            }
        }
        return {-1};
    }
};