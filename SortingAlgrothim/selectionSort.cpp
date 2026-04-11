/*
Selection Sort is a simple sorting algorithm where you repeatedly select the smallest element from the unsorted part of the array and place it at its correct position.

Time Complexity
Best Case: O(n²)
Worst Case: O(n²)
Average Case: O(n²)

Use Case
When memory writes (swaps) are costly
Selection sort performs minimum number of swaps → at most n-1 swaps
Useful when writing to memory is expensive (e.g., EEPROM, flash memory)


Stable Sorting Algorithm
Elements with the same value keep their original order after sorting
Example
Suppose we have:
(5, A), (3, B), (5, C), (2, D)
Here, 5A comes before 5C.
2, D), (3, B), (5, A), (5, C)
Order of 5A and 5C is preserved

Unstable Sorting Algorithm
It may change the order of equal elements.
Example
After sorting (unstable sort):
(2, D), (3, B), (5, C), (5, A)
Order of 5A and 5C changed

Selection Sort is an unstable sorting algorithm
*/

#include <bits/stdc++.h> 
using namespace std;
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i=0;i<arr.size()-1;i++){
        int minIndex=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }

}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);  
}