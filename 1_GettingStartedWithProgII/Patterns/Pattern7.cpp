#include<iostream>
using namespace std;

void method1(int N){
int i,j;
//pattern followed is space, star,space
    for(i=1;i<=N;i++){   //outerloop
        //for space
        for(j=1;j<=N-i;j++){
            cout<<"@ ";
        }
        //for star
        for(j=1;j<=2*i-1;j++){
            cout<<"* ";

        }
        //for space
        for(j=1;j<=N-i;j++){
            cout<<"@ ";
        }        

    cout<<endl;
    }

}

int main(){
int n;
cin>>n;
method1(n);
    return 0;
}