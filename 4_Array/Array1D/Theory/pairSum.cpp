#include<iostream>
using namespace std;
int main(){
    int arr[]={1, 3, 4, 5, 6,7, 8, 10}; //always sorted array
    int sum,i,j;
    cin>>sum;
    int n=sizeof(arr)/sizeof(int);
    cout<<n<<endl;
    i=0,j=n-1;
        while(i<j){
            if(arr[i]+arr[j]==sum){
                cout<<arr[i]<<" , "<<arr[j]<<endl;
                i++;
                j--;
            }else if(arr[i]+arr[j]<sum){
                i++;
            }else{
                j--;
            }
        }
    return 0;
}