class Solution {
    int atmost(vector<int>&nums , int k){
        if(k<0){
            return 0;
        }

        int r=0;
        int l=0;
        int len = nums.size();

        int cnt=0;
        int ans=0;


        while(r<len){

            if(nums[r]&1){
                cnt++;
            }

            while(cnt>k){
                if(nums[l]&1){
                    cnt--;
                }
                l++;
            }

            ans+=(r-l+1);
            r++;
        }
        return ans;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,k)- atmost(nums,k-1);
    }
};