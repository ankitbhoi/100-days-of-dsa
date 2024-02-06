#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr, int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;

    while(i<j){
        while(arr[i]<=pivot && i<=high-1){//we are searching for an element which is greater than pivot
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void quickSort(vector<int> &arr,int low,int high){
    if(low<high){   // single element is always sorted so no need to check it
        int partitionIndex=partition(arr,low,high);
        quickSort(arr,low,partitionIndex-1);
        quickSort(arr,partitionIndex+1,high);
    }
}

int main(){
    vector<int>arr{7,8,1,3,0};
    int n=arr.size();
    quickSort(arr,0,n-1);
    for(auto i:arr){
        cout<<i<<" ";
    }
return 0;
} 