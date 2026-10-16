#include<iostream>
#include<queue>
using namespace std;

void printq(queue<int> q){
    queue<int> qt(q);
    while(!qt.empty()){
        cout<<qt.front()<<" ";
        qt.pop();
    }
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    printq(q);
    cout<<endl;

    cout<<"front: "<<q.front()<<endl;
    cout<<"back: "<<q.back()<<endl;
    cout<<"size: "<<q.size()<<endl;

    return 0;
}