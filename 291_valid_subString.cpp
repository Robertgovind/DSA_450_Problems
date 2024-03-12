#include<iostream>
#include<stack>
using namespace std;
class Solution {
  public:
    int findMaxLen(string str) {
        // code here
        if(str.length()<2){
            return 0;
        }
        stack<int> s;
        for(int i=0;i<str.length();i++){
            char ch = str[i];
            if(ch == '('){
                s.push(i);
            }
            else{
                if(!s.empty() && str[s.top()] == '('){
                    s.pop();
                }
                else{
                    s.push(i);
                }
            }
        }
        
        int maxLen = str.length();
        int maxi = -1;
        while(!s.empty()){
            int curr = s.top();
            s.pop();
            int validLength = maxLen-curr-1;
            maxi = max(maxi,validLength);
            maxLen = curr;
        }
        return max(maxi,maxLen); // taking care of last case from index 0 to ....
    }
};