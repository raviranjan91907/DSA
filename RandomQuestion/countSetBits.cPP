#include<bits/stdc++.h>
using namespace std;

//count the set bits of given a and b
int countSetBits(int a,int b){
    int count=0;
    while(a>0 || b>0){
        count+= a & 1 ? 1 : 0;
        count+= b & 1 ? 1 : 0;
        b>>=1;
        a>>=1;
    }
    return count;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<countSetBits(a,b);
}