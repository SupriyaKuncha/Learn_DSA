#include<iostream>
#include <algorithm>
using namespace std;
bool compare(int a, int b){
    cout<<"Comparing "<<a<<" with "<<b<<endl;
    return a>b;
}
int main(){
    int n,i,j;
    cout<<"Inbuilt Sort"<<endl;
    cout<<"Enter N: "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the array elements that are to be sorted "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"in ascending order: "<<endl;
    sort(arr,arr+n);
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"in decending order: "<<endl;
    sort(arr,arr+n,compare);
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}