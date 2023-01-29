#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int row=0;row<n;row++){
        //space
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        //characters
        char ch='A';
        int breakpoint=((2*row)+1)/2;
        for(int col=1;col<=(2*row)+1;col++){
            cout<<ch;
            if(col<=breakpoint){
                ch++;
            }
            else{
                ch--;
            }
        }
        //space
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}


//     A
//    ABC
//   ABCDC
//  ABCDEDC
// ABCDEFEDC