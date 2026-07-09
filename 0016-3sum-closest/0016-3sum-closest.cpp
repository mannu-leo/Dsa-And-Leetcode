class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int mindiff=INT_MAX;
        int closet_sum=0; 
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                int diff=abs(target-sum);
                if(mindiff>diff){
                    closet_sum= sum;
                    mindiff=diff;
                }
                if(sum==target){
                    return sum;
                }
                else if(sum>target){
                    k--;
                }
                else{
                    j++;
                }
                
            }
        }
        return closet_sum;
        
    }
};