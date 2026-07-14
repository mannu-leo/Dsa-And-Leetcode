class Solution {
public:
    long long occurance(vector<int>nums,int k ){
        int l=0;
        int r=0;
        int sum=0;
        long long count=0;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>k){
                sum-=nums[l];
                l++;
            }
            count=count+(r-l+1);
            r++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                nums[i]=0;
            }
            else{
                nums[i]=1;
            }
        }
        return occurance(nums,k)-occurance(nums,k-1);    
    }
};