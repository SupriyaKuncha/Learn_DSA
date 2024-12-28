#include<iostream>
using namespace std;
int main(){

    int N,i,flag=0;
    cin>>N;
    if(2 < N <= 1000000000){
        for(i=2;i<N;i++){
            if(N%i==0){
                flag=1;
            }
        }
    }
    if(flag==1){
        cout<<"Not Prime"<<endl;
    }else{
        cout<<"Prime"<<endl;
    }
}