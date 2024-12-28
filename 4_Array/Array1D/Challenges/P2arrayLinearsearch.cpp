/*Question:

Take as input N, the size of an array. Take N more inputs and store that in an array. Take another number’s input as M. Write a function which returns the index on which M is found in an array, in case M is not found -1 is returned. Print the value returned.

It reads a number N.
2.Take Another N numbers as an input and store them in an Array.
Take another number M as an input.
If M is found in the Array the index of M is returned else -1 is returned and print the value returned.

Input Format

Constraints
N cannot be Negative. Range of Numbers can be between -1000000000 to 1000000000. M can be between -1000000000 to 1000000000.
*/
#include<iostream>
using namespace std;
int main() {
    int n,i,m,flag=0;
    cin>>n;
    int a[n];
    if(n>0){
for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    for(i=0;i<n;i++){
        if(a[i]==m){
            cout<<i<<endl;
			flag=0;
			break;
        }else{
			flag++;
		}
		}
		if(flag){
			cout<<"-1"<<endl;
		}
    }        
    }
    