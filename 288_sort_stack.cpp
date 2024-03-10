#include<iostream>
#include<stack>
using namespace std;
/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */

void insertSorted(stack<int> &s, int n){
    if(s.empty() || s.top()<n){
        s.push(n);
        return;
    }
    int num = s.top();
    s.pop();

    insertSorted(s,n);
    s.push(num);
}

void sortStack(stack<int> &s){
    if(s.empty()){
        return ;
    }
    int num = s.top();
    s.pop();

    sortStack(s);
    insertSorted(s,num);
}
void sorts()
{   stack<int> s;
   //Your code here
   sortStack(s);
}