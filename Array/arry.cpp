#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int num){
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void maxAndMin(int arr[],int n){
    int mi =INT_MAX;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        mi=min(mi,arr[i]);
        mx=max(mx,arr[i]);
    }
    cout<<mi<<endl<<mx<<endl;
}

void sumArray(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
    return;
}


void swapAlternative(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<=n-1){
            swap(arr[i],arr[i+1]);
        }
    }
    printArray(arr,n);
}


int main(){
// //Declare
    int number[15];

//Accessing an array
    cout<<"Values at 14 index"<<number[14]<<endl;

//initialising an array
    int second[3]={5,6,11};

//Acessing an element
    cout<<second[2]<<endl;

//initialising all the element of the array by 0
//we can't initialize all the element of array by other number except 0
    int arr[12]={0}; 
    printArray(arr,12);
//Example
    int arr1[12]={1};
    printArray(arr1,12);

    int arr2[12]={1,2};
    printArray(arr2,12);


//finding the size of the array
    int arr2Size=sizeof(arr2)/sizeof(int);
    cout<<"Size of arr2 is: "<<arr2Size;

//take a use input array and find the max and min element of the array
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    maxAndMin(arr,n);


//find the sum of the arr
    sumArray(arr,n);

    
//Swap the alternative number of the array
    swapAlternative(arr,n);


}