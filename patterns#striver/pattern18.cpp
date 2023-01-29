#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int row=0;row<n;row++){
        for(char ch='E'-row;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
return 0;
} 


// E 
// D E
// C D E
// B C D E
// A B C D E 