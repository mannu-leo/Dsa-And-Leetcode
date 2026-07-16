class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        int maxx=INT_MIN;
        vector<int>prefixgcd(n,0);
        for(int i=0;i<n;i++){
            maxx=max(nums[i],maxx);
            prefixgcd[i]=gcd(nums[i],maxx);
        }
        sort(prefixgcd.begin(),prefixgcd.end());
        long long sum=0;
        for(int i=0;i<n/2;i++){
            sum+=gcd(prefixgcd[i],prefixgcd[n-1-i]);
            
        }
        return sum;
    }
};