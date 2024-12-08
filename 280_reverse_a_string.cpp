#include<iostream>
#include<stack>
using namespace std;
//return the address of the string
char* reverse(char *S, int len)
{
    //code here
    stack<int> s;
    char *str;
    str = new char[len];
    for(int i=0;i<len;i++){
        s.push(S[i]);
    }
    for(int i=0;i<len;i++){
        str[i]=s.top();
        s.pop();
    }
    return str;
}