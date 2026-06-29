class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> map;
        

        int i =0;
        int l=0;
        int n = s.length();
        int maxlen=INT_MIN;
        if(n==0){
            return 0;
        }

        while(i<n){
            if(map.find(s[i])!=map.end()){
               while(l<i && map.find(s[i])!=map.end()){
                map.erase(s[l]);
                l++;
               }
            }

            map.insert(s[i]);

            maxlen= max(maxlen,i-l+1 );

i++;
        }
        return maxlen;
    }
};