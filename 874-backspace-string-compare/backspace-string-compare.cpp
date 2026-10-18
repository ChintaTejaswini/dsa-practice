class Solution {
public:
    stack<char> first;
    stack<char> second;
    bool backspaceCompare(string s, string t) {
        for(int i=0;i<s.size();i++){
            char c = s[i];
            if(c=='#'){
                if(!first.empty()){
                    first.pop();
                }
            }else{
                first.push(c);
            }
        }

        for(int i=0;i<t.size();i++){
            char c = t[i];
            if(c=='#'){
                if(!second.empty()){
                    second.pop();
                }
            }else{
                second.push(c);
            }
        }

        return first==second;


    }
};