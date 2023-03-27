#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int low,int high,int mid){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high ){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }

}

void mergeSort(vector<int> &arr,int low,int high){
  if(low>=high){
    return;
  }
        int mid=low+(high-low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,high,mid);
}
int main(){
    vector<int>arr{7,8,1,3,0};
    int n=arr.size();
    mergeSort(arr,0,n-1);
    for(auto i:arr){
        cout<<i<<" ";
    }
return 0;
}