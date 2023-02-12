#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1={1,2,3,6,7,8};
    vector<int> v2={1,3,6};
    vector<int> ans;
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v2.size();j++){
            if(v1[i]==v2[j]){
                ans.push_back(v2[j]);
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
return 0;
} 