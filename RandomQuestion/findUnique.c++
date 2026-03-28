#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans^=arr[i];
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    cout<<findDuplicate(arr);
}