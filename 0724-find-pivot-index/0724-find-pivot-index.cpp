class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int leftsum=0;
        int rightsum=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            
        }
        for(int i=0;i<n;i++){
            int rightsum=sum-nums[i]-leftsum;
            if(leftsum==rightsum){
                return i;
            }
            leftsum+=nums[i];
        }
        return -1;
    }
};