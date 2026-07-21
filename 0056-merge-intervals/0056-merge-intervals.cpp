class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
     

        sort(intervals.begin(), intervals.end());

        vector<vector<int>>ans;
        ans.push_back(intervals[0]);


        for(int i=1;i<intervals.size();i++){


            int currstarttime= intervals[i][0];
            int lastindex= ans.size()-1;

            int lastendtime = ans[lastindex][1];



            if(currstarttime<=lastendtime){
                ans[lastindex][1]= max(intervals[i][1] , lastendtime);
            }else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};