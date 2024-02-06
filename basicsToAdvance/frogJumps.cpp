#include<bits/stdc++.h>
using namespace std;
vector<int>arr;
int n;
int k;
int frog(int idx){
    if(idx==n-1){
        return 0;
    }
    int ans=INT_MAX;
    for(int i=1;i<=k;i++){// jumps 
    if(idx+i<n)//idx=current
       ans=min(ans,abs(arr[idx+i]-arr[idx]) + frog(idx+i));
    }
    return ans;
}

int main(){
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<frog(0);
    
return 0;
} 