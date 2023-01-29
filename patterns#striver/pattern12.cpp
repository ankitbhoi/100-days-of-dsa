#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int firstRowSpace=(2*n)-2;
    for(int row=0;row<n;row++){
        //numb
        for(int col=0;col<row+1;col++){
            cout<<col+1;
        }
        //space
        for(int col=0;col<firstRowSpace;col++){
            cout<<" ";
        }
        firstRowSpace=firstRowSpace-2;
        //numb
        for(int col=row+1;col>0;col--){
            cout<<col;
        }
        cout<<endl;
    }
    return 0;
}


// 1      1
// 12    21
// 123  321
// 12344321