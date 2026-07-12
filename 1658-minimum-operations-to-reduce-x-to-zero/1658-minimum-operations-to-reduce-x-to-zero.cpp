class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int totalsum=0;
        int n=nums.size();
        for(auto i:nums){
            totalsum+=i;
        }
        int left=0;
        int right=0;
        int sum=0;
        int maxlen=INT_MIN;
        int target=totalsum-x;
        if(target==0){
            return n;
        }
        if(x>totalsum){
            return -1;
        }
        while(right<nums.size()){
            sum+=nums[right];
            while(sum>totalsum-x){
                sum-=nums[left];
                left++;
            }
            if(sum==totalsum-x){
                maxlen=max(maxlen,(right-left+1));
            }
            right++;

        }
        return maxlen==INT_MIN?-1:n-maxlen;
        
    }
    

};