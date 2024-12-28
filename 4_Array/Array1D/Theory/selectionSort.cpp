#include<iostream>
using namespace std;
int main(){
    int n,i,j,min;
    cout<<"Selection Sort "<<endl;
    cout<<"Enter N: "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the array elements that are to be sorted in ascending order: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<=n-2;i++){
        min=i;//consider the first index element as lowest
        for(j=i+1;j<=n-1;j++){
            if(arr[j]<arr[min]){ //searching for next lowest
                min=j;// if found , update the min to j index
            }
        }
        swap(arr[i],arr[min]);
    }

        cout<<"Array after sorting: ";
        for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}