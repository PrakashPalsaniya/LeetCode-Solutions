class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }

        for(int i=0;i<s.length();i++){
            if(s.find(s[i])!=t.find(t[i])){
                return false;
            }
        }
        return true;
    }
};