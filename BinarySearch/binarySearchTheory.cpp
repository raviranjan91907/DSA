#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr,int key){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

        // go to right part
        if(key>arr[mid]){
            start=mid+1;
        }
        //go to left part
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    vector<int> arr1={1,2,3,45,69,97};
    vector<int> arr2={1,2,32,34,43};
    cout<<binarySearch(arr1,34)<<endl;
    cout<<binarySearch(arr2,34);
}