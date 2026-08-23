class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>st;
        int value, value1;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="C"){
                st.pop();
            }else if(ops[i]=="D"){
                value = st.top();
                value1 = value*2;
                st.push(value1);
            }else if(ops[i]=="+"){
                value = st.top();
                st.pop();
                value1 = st.top();
                st.push(value);
                st.push(value+value1);
            }else{
                st.push(stoi(ops[i]));
            }
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
            
        }
        return sum;

    }
};