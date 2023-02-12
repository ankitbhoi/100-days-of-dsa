//bruteforce
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v1={1,2,3,6,7,8};
//     vector<int> ans;
//     int sum=9;
//     for(int i=0;i<v1.size();i++){
//         for(int j=i+1;j<v1.size();j++){
//             if((v1[i]+v1[j])==sum){
//                 cout<<v1[i]<<","<<v1[j]<<endl;
//             }
//         }
//     }
// return 0;
// } 
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1={3,2,1,7,6,8};
    vector<int> ans;
    int sum=9;
    for(int i=0;i<v1.size();i++){
        for(int j=i+1;j<v1.size();j++){
            if((v1[i]+v1[j])==sum){
                cout<<v1[i]<<","<<v1[j]<<endl;
            }
        }
    }
return 0;
} 