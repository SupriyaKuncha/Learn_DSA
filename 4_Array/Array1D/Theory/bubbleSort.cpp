#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Bubble Sort"<<endl;
    cout<<"Enter N: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements that are to be sorted in ascending order: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<=n-2;i++){
        for(j=0;j<=n-2;j++){
            if(arr[j]>arr[j+1]){
                cout<<arr[j]<<" at index "<<j<<" is greater than "<<arr[j+1]<<" at index "<<j+1<<endl;
                cout<<"Hence swap"<<endl;
                swap(arr[j], arr[j+1]);
            }else{
                cout<<arr[j]<<" at index "<<j<<" is less than "<<arr[j+1]<<" at index "<<j+1<<endl;
                cout<<"Do not swap"<<endl;
            }
        }
    }
    cout<<"Array after sorting: ";
        for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



}