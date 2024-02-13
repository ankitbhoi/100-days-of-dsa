#include<bits/stdc++.h>
using namespace std;

void indexOfOccurrence(string& name,char& key,int s,vector<int>& arr){
    if(s==-1){
        return;
    }
    if(key==name[s]){
        arr.push_back(s);
    }
    indexOfOccurrence(name,key,s-1,arr);
}

int main(){
    string name="ankitghosal";
    int s=name.length();
    char key='a';

    vector<int>arr;

    indexOfOccurrence(name,key,s-1,arr);

    for(int i=arr.size()-1;i>=0;i--){
        cout<<arr[i]<<endl;
    }
return 0;
} 

//int* p = &a (address of a)
//int& b = a (b is a reference varible-> same memory different names )