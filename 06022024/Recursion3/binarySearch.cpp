#include<bits/stdc++.h>
using namespace std;

bool binSer(int arr[],int key,int low,int high){
    if(low>high){
        return false;
    }

    int mid = low+((high-low)/2);

    if(arr[mid]<key){
        return binSer(arr,key,mid+1,high);
    }

    if(arr[mid]>key){
        return binSer(arr,key,low,mid-1);
    }

    return true;
}

int main(){
    int arr[]={2,3,4,5,6,7};
    int key=6;

    cout<<binSer(arr,key,0,5)<<endl;
return 0;
} 