#include<bits/stdc++.h>
using namespace std;

void recurArray(int arr[],int n){
    if(n==0){
        return;
    }
    int ans = arr[n-1];
    recurArray(arr,n-1);
    cout<<ans<<endl;
}

int main(){
    int arr[]={1,2,3,4,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    recurArray(arr,n);
return 0;
} 

