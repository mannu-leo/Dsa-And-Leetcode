class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr;
        arr.push_back(nums[0]);
        vector<int>arr1;
        arr1.push_back(nums[1]);
        for(int i=2;i<n;i++){
            if(arr.back()>arr1.back()){
                arr.push_back(nums[i]);
            }
            else{
                arr1.push_back(nums[i]);
            }
            
        }
        int n1=arr.size();
        int n2=arr1.size();
        vector<int>result(n);
        for(int i=0;i<n1;i++){
            result[i]=arr[i];
        }
        for(int i=0;i<n2;i++){
            result[n1+i]=arr1[i];
        }
        return result;

        
    }
};