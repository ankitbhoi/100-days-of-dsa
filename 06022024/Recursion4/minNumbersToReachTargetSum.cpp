#include<bits/stdc++.h>
using namespace std;

//man lo ki tmhare pass 1,2,3 ki abundant supply hai to tumko sabse minimum number of numbers ko use krke apne target sum tak pohochna hai ....

int funk(vector<int>& arr,int target){
    if(target==0){
        return 0;
    }

    if(target<0){
        return INT_MAX;
    }

    int mini=INT_MAX;
    for(int i=0;i<arr.size();i++){
        int ans = funk(arr,target-arr[i]);
        if(ans!=INT_MAX){
            mini=min(mini,ans+1);
        }
    }
    return mini;
}

int main(){
    vector<int>arr={1,2};
    int target=3;

    cout<<funk(arr,target)<<endl;
return 0;
} 