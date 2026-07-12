class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<int>temp;
        for(int i=0;i<n;i++){
            temp.push_back(arr[i]);
        }
        sort(temp.begin(),temp.end());
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(temp[i])==mp.end()){
                mp[temp[i]]=mp.size()+1;
            }
          
        }
        for(int i=0;i<n;i++){
            arr[i]=mp[arr[i]];
        }
        return arr;
    }
};