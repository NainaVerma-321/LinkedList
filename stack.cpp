#include<iostream>
#include<stack>
using namespace std;

void printstack(stack<int> s){
    stack<int> temp(s);
    while(!temp.empty()){
        cout<<temp.top()<<endl;
        temp.pop();
    }
}

int main (){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
     
// see the values in stack
    printstack(s);
    cout<<"size of stack is "<<s.size()<<endl;
    cout<<"top of stack is "<<s.top()<<endl;

    return 0;


}