#include<iostream>
using namespace std;
void PrintArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    cout<<n<<endl;
    cout<<"Using print function"<<endl;
    PrintArray(arr,n);
return 0;
}