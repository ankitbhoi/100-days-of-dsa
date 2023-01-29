#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int i=1;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<i<<" ";
            i=i+1;
        }
        
        cout<<endl;
    }
    return 0;
}

// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15