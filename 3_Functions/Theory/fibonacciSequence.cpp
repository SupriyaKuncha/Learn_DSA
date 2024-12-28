#include<iostream>
using namespace std;
void fibonacci(int n){
    int f1,f2,f3,i;
    if(n==1){
        cout<<0;
    }else if(n==2){
        cout<< 1;
    }else{
        f1=0; f2=1;
        cout<<f1<<" "<<f2<<" ";
        for(i=2;i<=n-1;i++){
            f3=f1+f2;
            cout<<f3<<" ";
            f1=f2;
            f2=f3;
        }


    }

}
int main(){
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}