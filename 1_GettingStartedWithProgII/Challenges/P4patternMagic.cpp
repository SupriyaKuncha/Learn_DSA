/*
You will be given a number N. You have to code a hollow diamond looking pattern.

The output for N=5 is given in the following image.
*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********

Input Format
The input has only one single integer N.

Constraints - No

Output Format
Output the given pattern.


Sample Input
5
Sample Output
*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
********* 
Explanation
Write a code to print above given pattern. No space between any two characters.*/
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
/*the upper part
---------
********* i=0 (if i==0, then print this)
**** **** i=1 (else print these)
***   *** i=2
**     ** i=3
*       * i=4
---------
*/
for(i=0;i<n;i++){
    if(i==0){
    for(j=1;j<2*n;j++){
        cout<<"*";
    }        
    }else{
        //star
        for(j=1;j<=n-i;j++){
            cout<<"*";
        }
        //space
        for(j=1;j<=2*i-1;j++){
            cout<<" ";
        }
        //star
        for(j=1;j<=n-i;j++){
            cout<<"*";
        }
    }
    cout<<endl;
}

//the lower part
/*
---------
**     ** i=3 (if i!=0, print these)
***   *** i=2
**** **** i=1
********* i=0 (if i==0, print this)
---------
*/    
for(i=n-2;i>=0;i--){
    if(i!=0){
        //star
        for(j=1;j<=n-i;j++){
            cout<<"*";
        }
        //space
        for(j=1;j<=2*i-1;j++){
            cout<<" ";
        }
        //star
        for(j=1;j<=n-i;j++){
            cout<<"*";
        }
    }else{
        for(j=1;j<2*n;j++){
            cout<<"*";
        }
    }
    cout<<endl;
}
return 0;   
}