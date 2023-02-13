#include <bits/stdc++.h>
using namespace std;
  
// This function prints the first repeating element in arr[]
void printFirstRepeating(int arr[], int n)
{
    int min=-1;
        set<int> s;
        for(int i=n-1;i>=0;i--){
            if(s.find(arr[i])!=s.end()){
                min=i;
            }
            else{
                s.insert(arr[i]);
            }
        }
        if(min!=-1){
            cout<< min+1<<" "<<arr[min]<<endl;
        }
        else{
            cout<<"-1"<<endl;;
        }
}
  
// Driver Code
int main()
{
    int arr[] = { 1, 5 ,3 ,4 ,3 ,5 ,6 };
  
    int n = sizeof(arr) / sizeof(arr[0]);
    printFirstRepeating(arr, n);
}