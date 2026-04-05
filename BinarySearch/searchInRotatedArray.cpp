#include<bits/stdc++.h>
using namespace std;
int pviot(int* arr,int n){
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    while(s<e){
        if(arr[m]>=arr[0]){
            s=m+1;
        }
        else{
            e=m;
        }
        m=s+(e-s)/2;
    }
    return m;
}
int binarySearch(int* arr,int s,int n,int key){
    int e=n;
    int m=s+(e-s)/2;
    while(s<=e){
        if(key==arr[m]) return m;
        if(key>arr[m]) s=m+1;
        else e=m-1;
        m=s+(e-s)/2;
    }
    return -1;
}
int search(int* arr, int n, int key) {
    // Write your code here.
    int p=pviot(arr,n);
    if(key>=arr[p] && key<=arr[n-1]){
        return binarySearch(arr,p,n-1,key);
    }
    return binarySearch(arr,0,p-1,key);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;

    /*
    5
    100 -2 6 10 11
    100
    */
}