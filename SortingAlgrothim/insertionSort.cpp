
/*
Insertion Sort is a simple sorting algorithm that works the way you sort playing cards in your hand.
You pick one element at a time and insert it into its correct position in the already sorted part of the array.

How It Works (Step-by-Step)
Suppose the array is:
[5, 2, 4, 6, 1, 3]

Step 1:
First element (5) is already considered sorted.
Step 2:
Take 2 → compare with 5 → place before it
👉 [2, 5, 4, 6, 1, 3]
Step 3:
Take 4 → insert between 2 and 5
👉 [2, 4, 5, 6, 1, 3]
Step 4:
Take 6 → already in correct place
👉 [2, 4, 5, 6, 1, 3]
Step 5:
Take 1 → move it to the beginning
👉 [1, 2, 4, 5, 6, 3]
Step 6:
Take 3 → insert between 2 and 4
👉 [1, 2, 3, 4, 5, 6]


Algorithm (Simple Steps)
Start from the second element (index 1)
Compare it with previous elements
Shift larger elements to the right
Insert the current element at the correct position
Repeat until array is sorted

Time complexity
Best Case	O(n) (already sorted)
Average Case	O(n²)
Worst Case	O(n²)

*/


#include <bits/stdc++.h> 
using namespace std;
void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for(int i=1;i<n;i++){
        int j=i-1;
        int temp=arr[i];
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    insertionSort(n,arr);

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}