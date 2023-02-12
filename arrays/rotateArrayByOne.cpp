#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    int last=n-1;
    int secondLast=n-2;
    for(int i=0;i<n-1;i++){
        swap(arr[last],arr[secondLast]);
        last--;
        secondLast--;
    }
    //printArray
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
} 