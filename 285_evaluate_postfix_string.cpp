#include<iostream>
#include<stack>
using namespace std;

class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        // Your code here
        stack<int> st;
        for(int i=0;i<s.length();i++){
            char ch = s[i];
            if(ch >='0' && ch<='9'){
                st.push(ch-'0');
            }
            else{
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                if(ch == '+'){
                    st.push(b+a);
                }
                else if(ch == '-'){
                    st.push(b-a);
                }
                else if(ch == '*'){
                    st.push(b*a);
                }
                else if(ch == '/'){
                    st.push(b/a);
                }
            }
        }
        return st.top();
    }
};