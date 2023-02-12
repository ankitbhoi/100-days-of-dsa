//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int size)
    {
        
    int globalMax=INT_MIN;
    int index=-1;
    sort(arr,arr);
    for(int i=0;i<size;i++){
        int localMax=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                localMax++;
            }
        }
        if(globalMax<localMax){
            globalMax=localMax;
            index=i;
        }
    }
    if (globalMax > size / 2){
        return arr[index];
    }
    return -1;
}};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends