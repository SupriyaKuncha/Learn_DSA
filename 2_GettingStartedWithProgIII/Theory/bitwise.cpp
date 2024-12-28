#include<iostream>
using namespace std;
int main(){
    int a=7;
    int b=5;
    cout<<"AND operation of "<<a<<" & "<<b<<" is: "<<(a&b)<<endl;
    cout<<"OR operation of "<<a<<" | "<<b<<" is: "<<(a|b)<<endl;
    cout<<"XOR operation of "<<a<<" ^ "<<b<<" is: "<<(a^b)<<endl;
    int c=1;
    cout<<"c value: "<<c<<endl;
    c=c<<3;
    cout<<"C value After left shift by 3 times: "<<c<<endl;
    c=c>>3;
    cout<<"c value After right shift by 3 times: "<<c<<endl;
    cout<<"Ne gate of "<<c<<" is "<<(~c)<<endl;

return 0;

}