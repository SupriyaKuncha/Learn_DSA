#include<iostream>
using namespace std;

void method1(int N){
int i,j;
for(i=1;i<=N;i++){
    for(j=1;j<=N-i+1;j++){
        cout<<j<<" ";
    }
    cout<<endl;
}

}
// void method2(int N){
// int i,j;

// }

int main(){
int n;
cin>>n;
method1(n);
// method2(n);

    return 0;
}