class Solution {
public:
    bool checkValidString(string s) {
        stack<int> Brackets;
        stack<int> Stars;
        
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                Brackets.push(i);
            }else if(s[i] == '*'){
                Stars.push(i);
            }else{
                if(Brackets.empty() && !Stars.empty()){
                    Stars.pop();
                }else if(!Brackets.empty()){
                    Brackets.pop();
                }else{
                    return false;
                }
            }
        }
        
        while(!Brackets.empty() && !Stars.empty()){
            if(Brackets.top() > Stars.top()){ //ken  string format *( tnjmch taaml beha valid format 
                return false;
            }else{
                Brackets.pop();
                Stars.pop();
            }
        }
        
        
        return Brackets.empty();
        
    }
};