class Solution {
public:
    bool isValid(string s) {
        stack<int>st;


        int n=s.size();


        int i=0;

        while(i<n){
            if(s[i]=='(' || s[i]=='{' ||s[i]=='[' ){
                st.push(s[i]);
            }else{

                if(st.empty()){
                    return false;
                }

                char top=st.top();

                if(s[i]==')'&& top=='('|| s[i]=='}'&& top=='{' || s[i]==']'&& top=='['){
                    st.pop();
                }else{
                    return false;
                }
            }

i++;
        }
        return st.empty();
    }
};