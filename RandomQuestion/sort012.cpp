#include <bits/stdc++.h> 
using namespace std;
void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort012_1(int *arr, int n){
   //   Write your code here
   int i=0;
   int j=n-1;
   while(i < n && i < j){
      while(i<n && arr[i]==0) i++;
      while(j>=0 && arr[j]!=0) j--;
      if(i<j){
         swap(arr[i],arr[j]);
         i++;
         j--;
      } 
   }
   j=n-1;
    while(i < n && i < j){
      while(i<n && (arr[i]==1 && arr[i]==0)) i++;
      while(j>=0 && arr[j]!=1) j--;
      if(i<j) {
         swap(arr[i],arr[j]);
         i++;
         j--;
      }
   }
} 


void sort012_2(int *arr, int n)
{
   //   Write your code here
   int start=0,mid=0,end=n-1;
   while(mid<=end){
      if(arr[mid]==0){
         swap(arr[start],arr[mid]);
         start++;
         mid++;
      }
      else if(arr[mid]==1){
         mid++;
      }
      else{
         swap(arr[mid],arr[end]);
         end--;
      }
   }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort012_1(arr,n);
    printArray(arr,n);
}