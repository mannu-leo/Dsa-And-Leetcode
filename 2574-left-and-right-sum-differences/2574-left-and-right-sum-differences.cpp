class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        vector<int> leftsum(n, 0);
        vector<int> rightsum(n, 0);
        vector<int> answer(n, 0);
        for(int i=0;i<n;i++){
            if(i==0){
                continue;
            }
            leftsum[i]=leftsum[i-1]+nums[i-1];
        }
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        
        for(int i=0;i<n;i++){
            rightsum[i]=sum-nums[i];
            sum-=nums[i];
        }

        for(int i=0;i<n;i++){
            answer[i]=abs(leftsum[i]-rightsum[i]);

        }
        return answer;

    }
};