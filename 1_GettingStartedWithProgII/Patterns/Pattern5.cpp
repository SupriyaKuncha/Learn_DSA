#include<iostream>
using namespace std;

void method1(int N){
int i,j;
cout<<"################ Method 1(By decrementing j)####################"<<endl;
    for(i=1;i<=N;i++){
        for(j=N;j>=i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void method2(int N){
int i,j;
cout<<"################ Method 2(using n-i+1 with incrementing j)####################"<<endl;
    for(i=1;i<=N;i++){
        for(j=1;j<=N-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
int n;
cin>>n;
method1(n);
method2(n);

    return 0;
}

