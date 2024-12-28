#include<iostream>
#include<climits>
using namespace std;

int main(){
int n,i,largest=INT_MIN;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=0;i<n;i++){
    if(a[i]>largest){
        largest=a[i];
    }
}
cout<<largest<<endl;
 

}