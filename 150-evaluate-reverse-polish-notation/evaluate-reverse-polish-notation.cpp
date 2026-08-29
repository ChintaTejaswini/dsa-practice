class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++){
            string val = tokens[i];
            if(val!="-" && val!="+" && val!="*" && val!="/"){
                st.push(stoi(val));
            }else{
                int v1 = st.top();
                st.pop();
                int v2 = st.top();
                st.pop();
                char op = tokens[i][0];
                switch(op){
                    case '+':
                        st.push(v2+v1);
                    break;

                    case '-':
                        st.push(v2-v1);
                    break;

                    case '*':
                        st.push(v2*v1);
                    break;

                    case '/':
                        st.push(v2/v1);
                    break;
                }
            }
        }
        return st.top();
    }
};