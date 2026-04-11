/*
Bubble Sort is a simple sorting algorithm that repeatedly compares adjacent elements and swaps them if they are in the wrong order.
Larger elements “bubble up” to the end of the array — that’s why it’s called bubble sort.

Time Complexity
Best Case: O(n) (already sorted, with optimization)
Worst Case: O(n²)
Average Case: O(n²)

Bubble Sort is a stable sorting algorithm.
*/

#include <iostream>
using namespace std;

#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
 for (int i = 0; i < n - 1; i++) {
        // Optimization: check if swapped
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        // If no swap, array is already sorted
        if (!swapped) break;
    }
    
}

int main() {
    vector<int> arr = {5, 3, 2, 4};
    int n = 4;

    bubbleSort(arr,n);
    // Print array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}