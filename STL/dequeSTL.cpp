#include<bits/stdc++.h>
using namespace std;
void printDeque(deque<int> dq){
    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;
}
int main(){
    deque<int> dq;
    
    dq.push_back(1);
    dq.push_back(5);
    dq.push_back(7);
    cout<<"push_back "<<endl;
    printDeque(dq);

    dq.push_front(3);
    dq.push_front(4);
    dq.push_front(2);
    cout<<"push_back"<<endl;
    printDeque(dq);

    dq.pop_back();
    cout<<"pop back"<<endl;
    printDeque(dq);

    dq.pop_front();
    cout<<"pop front"<<endl;
    printDeque(dq);
    
    cout<<"before erase"<<endl;
    printDeque(dq);

    cout<<"After erase"<<endl;
    dq.erase(dq.begin(),dq.begin()+2); //delete the frist second element;
    printDeque(dq);
    
    
}