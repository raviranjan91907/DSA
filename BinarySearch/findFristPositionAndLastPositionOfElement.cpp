#include<bits/stdc++.h>
using namespace std;

int firstPosition(vector<int> arr,int x){
	int s=0;
	int e=arr.size()-1;
	int m=s+(e-s)/2;
	int f=-1;
	while(s<=e){
		if(arr[m]==x){
			f=m;
			e=m-1;
		}
		else if(x>arr[m]){
			s=m+1;
		}
		else{
			e=m-1;
		}
		m=s+(e-s)/2;
	}
	return f;
}
int lastPosition(vector<int> arr,int x){
	int s=0;
	int e=arr.size()-1;
	int m=s+(e-s)/2;
	int l=-1;
	while(s<=e){
		if(arr[m]==x){
			l=m;
			s=m+1;
		}
		else if(x>arr[m]){
			s=m+1;
		}
		else{
			e=m-1;
		}
		m=s+(e-s)/2;
	}
	return l;
}
vector<int> searchRange(vector<int> &arr, int x)
{
	// Write your code here.
	vector<int> ans;
	ans.push_back(firstPosition(arr,x));
	ans.push_back(lastPosition(arr,x));
	return ans;
}

int main(){
    
}