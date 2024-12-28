#include<iostream>
using namespace std;
int main(){
int N,i=1,uniqueNum,b,XOR;
cin>>N;
cin>>uniqueNum;
XOR=uniqueNum;
while(i<N){
    cin>>b;
    XOR=XOR^b;
    i++;
}

cout<<"Unique Number is: "<<XOR<<endl;
return 0;
}