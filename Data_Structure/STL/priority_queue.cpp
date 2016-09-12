//priority_queue

#include <iostream>
#include <queue>

using namespace std;

class cp{
    public:
    bool operator()(int &a, int &b){
        return a>b;//小於:由小而大 ，大於:由大而小 ，但取出(top())時是從最後面取出 
    }
};
//或用struct 
/*struct cp{
    bool operator()(int &a, int &b){
        return a<b;
    }
};*/

int main(int argc, char** argv) {
    priority_queue<int> pq;
    //priority_queue<int,vector<int>,cp> pq;//自訂順序 
    //priority_queue<int,vector<int>,greater<int> > pq;//由大到小 
    pq.push(555);
    pq.push(222);
    pq.push(333);
    pq.push(22);
    pq.push(2252);
    pq.push(333);
    
    cout<<"pq.top="<<pq.top()<<endl;
    cout<<"length="<<pq.size()<<endl;
    
    while(!pq.empty()){
        cout<<pq.top()<<",";
        pq.pop();
    }
}
