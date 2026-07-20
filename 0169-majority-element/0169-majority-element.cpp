class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candi=0;
        int cnt=0;

        for(int num:nums){
            if(cnt==0){
                candi=num;
            }

            if(num==candi){
                cnt++;
            }

            else{
                cnt--;
            }
        }

        return candi;
    }
};