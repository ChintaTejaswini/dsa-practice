class Solution {
public:
    stack<int> st;
    string removeDuplicates(string s) {
        for(int i=0;i<s.size();i++){
            char c = s[i];
            if(!st.empty() && c==st.top()){
                st.pop();
            }else{
                st.push(c);
            }
            
        }
        string ans = "";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};