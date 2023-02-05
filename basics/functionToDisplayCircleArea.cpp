#include<iostream>
using namespace std;

float area(float r){
    return 3.14*r*r;
}

int main()
{
    float r;
    cout<<"enter the radius of the circle:-";
    cin>>r;
    cout<<"area izz:"<<area(r);
return 0;
} 