#include<iostream>
using namespace std;
int factorial(int n){
int fact=n;
if(n==0){
    fact=1;
}else{
    while(n!=1){
    fact= fact*(n-1);
    n--;
    }
}

    return fact;

}

int main(){
//Calculate nCr problem;
int n,r,nCr,factOfN,factOfR,factOfN_R;
cout<<"Enter the values of n and r"<<endl;
cin>>n>>r;
if(r>=0&&n>=r){
factOfN=factorial(n);
factOfR=factorial(r);
factOfN_R=factorial(n-r);
nCr=(factOfN)/(factOfN_R*factOfR);
cout<<"value of nCr is "<<nCr<<endl;
}
else{
    cout<<"Range should be btw n>=r>=0, enter again"<<endl;
}

return 0;
}