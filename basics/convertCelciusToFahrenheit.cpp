#include<bits/stdc++.h>
using namespace std;

float celToFah(float c){
    return ((c * 9/5) + 32);
}

float fahToCel(float f){
    return ((f - 32) * 5/9);
}

int main(){
    cout<<"ENTER 0 FOR CELCIUS TO FAHRENHEIT\nENTER 1 FOR FAHRENHEIT TO CELCIUS"<<endl;
    int option;
    cin>>option;
    if(option){
        cout<<"enter temp in fahrenheit:"<<endl;
        float f;
        cin>>f;
        cout<<fahToCel(f)<<" degrees";
        
    }
    else{
        cout<<"enter temp in celcius:"<<endl;
        float c;
        cin>>c;
        cout<<celToFah(c)<<" degrees";
    }
return 0;
} 