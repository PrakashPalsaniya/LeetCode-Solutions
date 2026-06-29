class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();

        int r=0;
        int l=0;
        int ans =INT_MIN;

        while(r<n){
            if(nums[r]==0){
                k--;
            }

            while(k<0){
                if(nums[l]==0){
                    k++;
                }
                l++;
            }
            ans=max(ans, r-l+1);
            r++;
        }
        return ans;
    }
};