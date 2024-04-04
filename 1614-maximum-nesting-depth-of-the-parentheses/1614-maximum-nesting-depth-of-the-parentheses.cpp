class Solution {
public:
    int maxDepth(string s) {
        int result =0;
        int counter=0 ;
        for(char c:s){
            if(c=='('){
                counter++;
            }
            if(c==')'){   
                result=max(result,counter);
                counter--;
            }
        }
        return result;
    }
};