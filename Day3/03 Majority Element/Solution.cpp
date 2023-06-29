// Solution 1: sort and find majority by count variable --> Time : O(nlog n) && Space :O(1)
// Solution 2: use extra space i.e map --> Time : O(n) && Space : O(n)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        int c=0;
        for(auto x:mp){
            if(x.second>nums.size()/2)
                return x.first;
        }
        return -1;
    }
};

// Solution 3: play with count variable to find maximum time a element occurs as it is more tha n/2 times --> Time : O(n) && space :O(1)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=1,resPos=0,n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[resPos]==nums[i])
                c++;
            else
                c--;
            if(c==0){
                resPos=i;
                c=1;
            }
        }
        return nums[resPos];
    }
};
