#include<bits/stdc++.h>
using namespace std;
int mySqrt(int x) {
      int s=0;
      int e=x;
      long long int m=s+(e-s)/2;
      int ans=-1;
      while(s<=e){
        long long int sq=m*m;
        if(sq==x) return m;
        if(x>m*m){
          ans=m;
          s=m+1;
        }
        else{
          e=m-1;
        }
        m=s+(e-s)/2;
      }
      return ans;
    }
double addingPression(int n,int pression,int tempsol){
  double fraction=1;
  double ans=tempsol;
  for(int i=0;i<pression;i++){
    fraction=fraction/10;
    for(double j=ans;j*j<n;j+=fraction) ans=j;
  }
  return ans;
}
int main(){
    int n;
    cin>>n;
    int tempSol=mySqrt(n);
    cout<<addingPression(n,3,tempSol);
}