class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size(); 
        vector<int>arr(m+n);
        for(int i=0;i<n;i++){
            arr[i]=nums1[i];
           
            
        }
        for(int i=0;i<m;i++){
            arr[n+i]=nums2[i];
           
            
        }
        sort(arr.begin(),arr.end());
        double median;
        int s=arr.size();
        if(arr.size()%2==0){
            median=((arr[(s/2)-1]+arr[(s/2)])/2.0);
        }
        else{
            median=arr[s/2];
        }
        return median;

    }
};