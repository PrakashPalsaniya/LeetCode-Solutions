class Solution {
public:
    int myAtoi(string s) {
        int len=s.length();
int i=0;
int sign=1;
long long res=0;
        while(i<len && s[i]==' '){
            i++;

        }
        if(s[i]=='-'){
            sign=-1;
            i++;
        }else if(s[i]=='+'){
            i++;
        }
      if(i==len){
        return 0;
      }

       while(i<len&& isdigit(s[i])){
        res=res*10+ (s[i]-'0');


        if(sign*res > INT_MAX){
            return INT_MAX;
        }

        if(sign*res<INT_MIN){
            return INT_MIN;
        }
        i++;
       }


       return (sign*res);
    }
};