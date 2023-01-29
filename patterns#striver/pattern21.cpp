#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int row=0;row<n;row++){
        //stars
        for(int col=0;col<n;col++){
            if(row==0 || col==0 || row==n-1 || col==n-1){
                cout<<"*"<<" ";
            }
            else cout<<"  ";
        }
        cout<<endl;
        cout<<endl;
    }
return 0;
} 


// * * * * * 

// *       *

// *       *

// *       *

// * * * * *
