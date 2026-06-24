class Solution {
public:
    int maxDepth(string s) {
        int ans = INT_MIN;

        int cnt=0;


        for(char c:s){
            if(c=='('){
                cnt++;
            }
            else if(c==')'){
                cnt--;
            }


            ans = max(ans,cnt);
        }
        return ans;
    }
};