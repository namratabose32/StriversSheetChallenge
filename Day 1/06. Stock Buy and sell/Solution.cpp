// solution 1: with extra space

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> left(n),right(n);
        left[0]=prices[0];
        right[n-1]=prices[n-1];
        for(int i=1;i<n;i++){
            left[i]=min(left[i-1],prices[i]);
            right[n-1-i]=max(right[n-i],prices[n-1-i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,right[i]-left[i]);
        }return ans;
    }
};

//solution 2:
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=prices[0],mx=prices[0],ans=0,n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<mn){
                mn=prices[i];
                mx=prices[i];
            }
            if(mx<prices[i]){
                mx=prices[i];
                ans=max(ans,mx-mn);
            }
        }return ans;
    }
};
