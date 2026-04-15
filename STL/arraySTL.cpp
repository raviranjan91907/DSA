#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    //array
    array<int,4> a={1,2,3,4};
    cout<<a.size()<<endl;
    cout<<"Element at 2nd Index "<<a.at(2)<<endl;
    cout<<"first element "<<a.front()<<endl;
    cout<<"empty or not "<<a.empty()<<endl;
    cout<<"Last element "<<a.back()<<endl;
}