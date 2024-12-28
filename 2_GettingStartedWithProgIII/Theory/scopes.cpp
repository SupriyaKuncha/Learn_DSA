#include<iostream>
using namespace std;
int main(){

int a=1;
if(a>1){
    int x=10;
    cout<<"X is local: "<<x<<endl;
    cout<<"a is global: "<<a<<endl;
}
 
return 0;
}