#include<iostream>
#include<cmath>
using namespace std;
int trailingZeros(int N){
    int ans=0,D;
    for(D=5;(N/D)>=1;D*=5){
        ans+=(N/D);
    }
    return ans;

}
int trailingZeroMethod2(int N){
 int ans=0,i;
 for(i=1;(N/pow(5,i))>=1;i++){
        ans+=(N/pow(5,i));
    }
    return ans;

}
int main(){
    int n;
    cin>>n;
    cout<<trailingZeros(n)<<endl;
    cout<<"################## Method2 ########"<<endl;
    cout<<trailingZeroMethod2(n)<<endl;

}
