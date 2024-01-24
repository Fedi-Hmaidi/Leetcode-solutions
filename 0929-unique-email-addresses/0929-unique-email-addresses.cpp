class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
          int altIndex = 0;
    int plusIndex = 0;
    set<string> st;
    for(int i=0; i<emails.size(); i++){
        string str = emails[i];
        for(int i=0; i<str.size(); i++){
            if(str[i] == '@'){
                altIndex = i;
            }
            if(str[i] == '+'){
                plusIndex = i;
            }
        }
        string res= "";
        for(int j=0; j<str.size(); j++){
            if(str[j] != '+' && str[j] != '.'){
                res+=str[j];
            }else if(str[j] == '+'){
                j = altIndex-1;
            }
            if(j==altIndex-1){
                res+=str.substr(j+1);
                break;
            }
        }
        st.insert(res);
    }
        return st.size();
    }
};