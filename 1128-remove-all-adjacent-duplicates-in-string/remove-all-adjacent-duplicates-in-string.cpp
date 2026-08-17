class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            char ch = s[i];
            if(st.empty()){
                st.push(ch);
            }else if(st.top()!=ch){
                st.push(ch);
            }else if(st.top()==ch){
                st.pop();
            }
        }
        string ans = "";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }

    /*
    we check whether the top is equal to char 
    if yes then pop the top
    else push the char of s string
    implementation using stack
    */
};