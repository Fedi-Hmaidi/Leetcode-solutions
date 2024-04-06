class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        set<int> badIndex;
        for(int i=0; i<s.size(); i++){
            if (s[i] == '('){
                st.push(i);
            }else if(s[i] == ')'){
                if(st.empty()){
                    badIndex.insert(i);
                }else{
                    st.pop();
                }
            }
        }
        
        while(!st.empty()){
            badIndex.insert(st.top());
            st.pop();
        }
        string res = "";
        for(int i=0; i<s.size(); i++){
            if(!badIndex.contains(i)){
                res+=s[i];
            }
        }
        return res;
    }
};