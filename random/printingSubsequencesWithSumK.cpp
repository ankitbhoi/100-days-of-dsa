// #include<bits/stdc++.h>
// using namespace std;

// void f(int i,vector<int> &ans,int s,int sum,int arr[],int n){
//     if(i==n){
//         //print the element part
//         if(s==sum){
//             for(auto it:ans){
//                 cout<<it<<" ";
//             }
//             cout<<endl;
//         }
//         return;
//     }

//     ans.push_back(arr[i]);
//     s=s+arr[i];
//     f(i+1,ans,s,sum,arr,n);
//     ans.pop_back();
//     s=s-arr[i];
//     f(i+1,ans,s,sum,arr,n);

// }

// int main(){
//     int arr[]={1,2,1};
//     vector<int> ans;
//     int n=3;
//     int sum=2;
//     f(0,ans,0,sum,arr,n);

//     return 0;
// }


//to only print one subsequence add a booolean value to function and as soon as one subseq is printed exit.
#include<bits/stdc++.h>
using namespace std;

bool f(int i,vector<int> &ans,int s,int sum,int arr[],int n){
    if(i==n){
        //print the element part
        if(s==sum){
            for(auto it:ans){
                cout<<it<<" ";
            }
            return true;
        }
        return false;
    }

    ans.push_back(arr[i]);
    s=s+arr[i];
    if(f(i+1,ans,s,sum,arr,n)){
        return true;
    }
    ans.pop_back();
    s=s-arr[i];
    if(f(i+1,ans,s,sum,arr,n)){
        return true;
    };

    return false;

}

int main(){
    int arr[]={1,2,1};
    vector<int> ans;
    int n=3;
    int sum=2;
    f(0,ans,0,sum,arr,n);

    return 0;
}