class Solution {
public:
    int maxProduct(int n) {
        vector<int>array;
        while(n!=0){
            int rem=n%10;
            array.push_back(rem);
            n=n/10;
        }
        int product=INT_MIN;
        int m=array.size();
        for(int i=0;i<m-1;i++){
            for(int j=i+1;j<m;j++){
                int x=array[i]*array[j];
                product=max(product,x);   
            }
        }
        return product;
        
    }
};