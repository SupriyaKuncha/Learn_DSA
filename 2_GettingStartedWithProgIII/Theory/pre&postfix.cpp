#include<iostream>
using namespace std;
int main(){
    int a = 1;
    cout<<"Value of a is: "<<a<<endl;
    a++;
    cout<<"After a++, Value of a is: "<<a<<endl;
    int b=a++;
    cout<<"int b=a++; means int b=a & a=a+1"<<endl;
    cout<<"Value of b is: "<<b<<endl;
    cout<<"Value of a is: "<<a<<endl;
    int c = ++a;
    cout<<"int c=++a; means a=a+1 & then int c=a"<<endl;
    cout<<"Value of c is: "<<c<<endl;
    cout<<"Value of a is: "<<a<<endl;














return 0;
}
