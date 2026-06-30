class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> count(3,0);

        int len = s.length();


       int r=0;
       int l=0;
       int ans=0;


       while(r<len){

        count[s[r]-'a']++;

        while(count[0]>0 && count[1]>0 && count[2]>0){
            ans+=(len-r);
            count[s[l]-'a']--;
            l++;
        }
        r++;
       }
       return ans;
    }
};