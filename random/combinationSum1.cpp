#include<bits/stdc++.h>
using namespace std;

void f(int i,vector<int> &ds,int target,vector<int> &arr){
    if(i==arr.size()){
        if(target==0){
            for(auto it :ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }

    if(arr[i]<=target){
        ds.push_back(arr[i]);
        f(i,ds,target-arr[i],arr);
        ds.pop_back();
    }

    f(i+1,ds,target,arr);
}

int main(){
    vector<int> candidates{2,3,6,7};
    int target=7;
    vector<int> ds;
    // vector<vector<int>>ans;
    f(0,ds,target,candidates);

    return 0;
    
}