#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Insertion Sort: "<<endl;
    cout<<"Enter N: "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the array elements that are to be sorted in ascending order: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }

        cout<<"Array after sorting: ";
        for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}