class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        // vector<int>arr;
        // vector<int>large;
        // vector<int>pivott;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     if(nums[i]<pivot){
        //         arr.push_back(nums[i]);
        //     }
        //     else if(nums[i]==pivot){
        //         pivott.push_back(nums[i]);
        //     }
        //     else{
        //         large.push_back(nums[i]);

        //     }
        // }
        // int m=arr.size();
        // int x=pivott.size();
        // int o=large.size();
        // for(int i=0;i<m;i++){
        //     nums[i]=arr[i];
        // }
        // int j=0;
        // for(int i=m;i<m+x;i++){
        //     nums[i]=pivott[j];
        //     j++;
        // }
        // int k=0;
        // for(int i=m+x;i<m+x+o;i++){
        //     nums[i]=large[k];
        //     k++;
        // }
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                ans.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==pivot){
                ans.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>pivot){
                ans.push_back(nums[i]);
            }
        }
        return ans;         
    }
    
};