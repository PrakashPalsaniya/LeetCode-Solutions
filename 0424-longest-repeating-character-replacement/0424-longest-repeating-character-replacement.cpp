class Solution {
public:
    int characterReplacement(string s, int k) {
        int len = s.length();
        int r=0;
        int l=0;
int ans =INT_MIN;
        int maxcnt=0;

        unordered_map<char,int> map;

        while(r<len){

            map[s[r]]++;

            maxcnt=max(maxcnt, map[s[r]]);

            while((r-l+1)-maxcnt>k){
                map[s[l]]--;
                l++;
            }
            
            ans = max(ans , r-l+1);
            r++;
        }
        return ans;
    }
};