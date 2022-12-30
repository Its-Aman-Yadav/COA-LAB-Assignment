//And, Or, Not Logic Implementation

#include <iostream>
using namespace std;

int main(){

    int a,b;
    
    cout<<"enter the input A"<<"=";
    cin>>a;
    
    cout<<"enter the input B"<<"=";
    cin>>b;
    
    cout<<"For AND Gate"<<endl;
    cout<<a<<"AND"<<b<<"=";
    if(a&&b==1)
        cout<<"1";
    else 
        cout<<"0";
        
    cout<<endl<<"For OR Gate"<<endl;
    
    //for or gate
    if(a||b==1)
        cout<<"1";
    else
        cout<<"0";
        
    cout<<endl<<"For NOT Gate"<<endl;
    
    if(a!=1)
        cout<<"1";
    else
        cout<<"0";
