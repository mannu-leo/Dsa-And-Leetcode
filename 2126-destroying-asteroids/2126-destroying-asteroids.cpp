class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        if(mass<asteroids[0]){
                return false;
            }
        long long sum=mass;
        for(int i=0;i<asteroids.size();i++){
            if(sum>=asteroids[i]){
                sum+=asteroids[i];
            }
            
            else if(sum<asteroids[i]){
                return false;
            }

        }
        return true;
        
    }
};