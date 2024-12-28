#include<iostream>
#include<climits>
using namespace std;
void generateSubarray(int a[],int n){
    cout<<"Generate subarray: "<<endl;
    int i,j,k; //i=outerloop, j=innerloop,k=subarray
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            for(k=i;k<=j;k++){
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
}

}
void maxSumOfSubArray(int a[], int n){
    cout<<"maxSumOfSubArray: "<<endl;
    int i,j,k,wi,wj;
    int max_sum=INT_MIN;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            int sum=0;
            for(k=i;k<=j;k++){
                sum+=a[k];
                }
               if(sum>max_sum){
                max_sum=sum;
                wi=i;
                wj=j;
                }
            cout<<"sum: "<<sum<<", Max sum: "<<max_sum<<" at window frame i: "<<wi<<" j: "<<wj<<endl;

        }
    }
    cout<<"Maximum sum: "<<max_sum<<" i: "<<wi<<" j: "<<wj<<endl;

}
void maxSumSubArray(int a[],int n){
    cout<<"MaxSum containing SubArray: ";
int i,j,k,wi,wj;
    int max_sum=INT_MIN;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            int sum=0;
            for(k=i;k<=j;k++){
                sum+=a[k];
                }
               if(sum>max_sum){
                max_sum=sum;
                wi=i;
                wj=j;
                }  
            }   
    }
    for(i=wi;i<=wj;i++){
        cout<<a[i]<<" ";
    }
}

void maxSumSubArrayOptimized(int a[], int n){
    int i,j,k,wi,wj;
    int csum[1000]={0};
    int max_sum=INT_MIN;
    //pre computation
    for(i=1;i<n;i++){
        csum[i]=csum[i-1]+a[i];
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            int sum=0;
            sum=csum[j]-csum[i-1];
                if(max_sum<sum){
                    max_sum=sum;
                    wi=i;
                    wj=j;
                }
            }

            }
            
    cout<<endl;
    cout<<"Maximum sum using optimized approach: "<<max_sum<<endl;

}
int main(){
int a[]={1,4,-4,-7,2,5,3};
int n=sizeof(a)/sizeof(int);
generateSubarray(a,n);
maxSumOfSubArray(a,n);
maxSumSubArray(a,n);
maxSumSubArrayOptimized(a,n);

}