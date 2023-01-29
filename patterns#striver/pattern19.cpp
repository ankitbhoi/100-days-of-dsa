#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int firstRowSpace=0;
    for(int row=0;row<n;row++){
        //stars
        for(int col=0;col<n-row;col++){
            cout<<"*"<<" ";
        }
        //space
        for(int col=0;col<firstRowSpace;col++){
            cout<<"  ";
        }
        firstRowSpace=firstRowSpace+2;
        //stars
        for(int col=0;col<n-row;col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
        cout<<endl;
    }
    firstRowSpace=(2*n)-2;
    for(int row=0;row<n;row++){
        //stars
        for(int col=0;col<row+1;col++){
            cout<<"*"<<" ";
        }
        //space
        for(int col=0;col<firstRowSpace;col++){
            cout<<"  ";
        }
        firstRowSpace=firstRowSpace-2;
        //stars
        for(int col=0;col<row+1;col++){
            cout<<"*"<<" ";
        }
        cout<<endl;        
        cout<<endl;        

    }
return 0;
} 

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********