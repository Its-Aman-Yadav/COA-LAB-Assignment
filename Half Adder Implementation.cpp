//Program for Half Adder Implementation 

#include<iostream>
using namespace std;

void halfadder(int A,int B){
    int sum,carry;
    sum=A^B;
    carry=A&B;
    cout<<"sum="<<sum<<endl;
    cout<<"carry="<<carry<<endl;
}

int main(){
    int A=1;
    int B=0;
    halfadder(A,B);
    return 0;
}
