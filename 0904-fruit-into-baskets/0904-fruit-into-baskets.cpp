class Solution {
public:
    int totalFruit(vector<int>& fruits) { 
        int k=2;
        int left=0;
        int right=0;
        int n=fruits.size();
        int maxlen=0;
        unordered_map<int,int> mp;
        for(int right=0;right<n;right++){
            mp[fruits[right]]++;
            if(mp.size()>k){
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0){
                    mp.erase(fruits[left]);
                }
                left++;
            }
            if(mp.size()<=k){
                maxlen=max(maxlen,(right-left)+1);
            }


        }
        return maxlen;
        
    }
};