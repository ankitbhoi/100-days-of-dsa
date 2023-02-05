#include<iostream>
using namespace std;

int fact(int num){
    int factor=1;
    for(int i=num;i>1;i--){
        factor=factor*i;
    }
    return factor;
}

int main()
{
int num;
cout<<"enter the number:-"<<endl;
cin>>num;
cout<<fact(num);
return 0;
} 