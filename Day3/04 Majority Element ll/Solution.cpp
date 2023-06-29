// Solution 1: sort and use count variable to find ans --> Time : O(n log n) && Space : O(1)
// Solution 2: use of map --> Time : O(n) && : O(n)
/** 
    Solution 3: Since majority elment is more than n/3 times 
    i.e array can be divided into 2 parts which can have majority elements.
**/
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int x=INT_MAX,y=INT_MAX,cx=0,cy=0,n=nums.size();
        for(int num:nums){
            if(num==x)
                cx++;
            else if(num==y)
                cy++;
            else if(cx==0){
                x=num;
                cx=1;
            }else if(cy==0){
                y=num;
                cy=1;
            }else{
                cx--;
                cy--;
            }
        }
        vector<int> ans;
        cx=cy=0;
        for(int num:nums){
            if(x==num)
                cx++;
            else if(y==num)
                cy++;
        }
        if(cx>n/3)
            ans.push_back(x);
        if(cy>n/3)
            ans.push_back(y);
        return ans;
    }
};
