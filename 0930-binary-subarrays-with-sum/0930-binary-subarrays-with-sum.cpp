class Solution {
    long long solve(vector<int>&nums , int goal){
        if(goal<0){
            return 0;
        }
        int len = nums.size();
long long ans=0;
        long long sum=0;

        int r=0;
        int l=0;

        while(r<len){
            sum+=nums[r];

            while(sum>goal){
                sum-=nums[l];
                l++;
            }

            ans+=(r-l+1);
            r++;
        }
        return ans;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return ( solve(nums, goal) - solve(nums , goal-1));
    }
};