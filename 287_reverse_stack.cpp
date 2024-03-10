#include<iostream>
#include<stack>
using namespace std;
class Solution{
private:
    void insertAtButtom(stack<int> &s, int x){
        if(s.empty()){
            s.push(x);
            return ;
        }
        
        int num = s.top();
        s.pop();
        insertAtButtom(s,x);
        s.push(num);
    }
public:
    void Reverse(stack<int> &s){
        if(s.empty()){
            return ;
        }
        int num = s.top();
        s.pop();
        Reverse(s);
        insertAtButtom(s,num);
        
    }
};