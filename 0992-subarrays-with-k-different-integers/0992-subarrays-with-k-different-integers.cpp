class Solution {

    int atmost(vector<int>& nums , int k){
        if(k<0){
            return 0;
        }


        unordered_map<int ,int> map;


        int len = nums.size();

        int l=0;
        int r=0;
int ans=0;
        while(l<len){

        map[nums[l]]++;


        while(map.size()>k){
            map[nums[r]]--;

            if(map[nums[r]]==0){
                map.erase(nums[r]);
            }
            r++;
        }

        ans +=(l-r+1);

        l++;

        }
        return ans;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)- atmost(nums, k-1);
    }
};