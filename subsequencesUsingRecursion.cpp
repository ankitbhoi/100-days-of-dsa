#include<bits/stdc++.h>
using namespace std;


void f(int i,int arr[],int n,vector<int> &ans){

    if(i==n){
        //printing the vector
            for(auto it:ans){
                cout<<it<<" ";
            }
            cout<<endl;

        return;
    }

    ans.push_back(arr[i]);
    f(i+1,arr,n,ans);
    ans.pop_back();
    f(i+1,arr,n,ans);

}

int main(){
    int arr[3]={3,1,2};
    int n=3;
    vector<int> ans;
    f(0,arr,n,ans);

    return 0;
}