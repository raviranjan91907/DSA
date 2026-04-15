#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){

    //vector
    vector<int> v;
    vector<int> v1(5,1); //initalize the vector of length 5 and all the element is 1
    cout<<"capacity when vector is empty "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity after 1 element insert "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity after 2 element insert "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity after 3 element insert "<<v.capacity()<<endl; 
    cout<<"size of vector "<<v.size()<<endl;
    cout<<"Element at 2nd index "<<v.at(2)<<endl;
    cout<<"first element "<<v.front()<<endl;
    cout<<"empty or not "<<v.empty()<<endl;
    cout<<"Last element "<<v.back()<<endl;
    cout<<"before pop back"<<endl;
    printVector(v);
    v.pop_back();
    cout<<"after pop back"<<endl;
    printVector(v);
    cout<<"size before clear "<<v.size()<<endl;
    cout<<"capacity before clear "<<v.capacity()<<endl;
    v.clear();
    cout<<"size after clear "<<v.size()<<endl;
    cout<<"capacity after clear "<<v.capacity()<<endl;    

     
}