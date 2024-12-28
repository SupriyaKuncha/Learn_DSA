/*
Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.


Input Format
Single integer N.


Constraints
N <= 20


Output Format
Print pattern.


Sample Input
5
Sample Output
    *****
   *   *
  *   *
 *   *
*****
Explanation
For any input N. First line contains 4 space and then 5 {*} and then the second line contains according to the output format.
*/
#include<iostream>
using namespace std;
int main(){ 
    int n,i,j;
    cin>>n;
    //replace @ with space 
    for(i=0;i<n;i++){
        if(i==0){ //for first line @@@@@*****
            for(j=1;j<n;j++){
                cout<<"@";
            }
            for(j=1;j<=n;j++){
                cout<<"*";
            }
        }else if(i==(n-1)){ //for last line *****@@@@
            for(j=1;j<=n;j++){
                cout<<"*";
            }
            for(j=1;j<n;j++){
                cout<<"@";
            }
        }
        else{ //for in btw lines
            for(j=1;j<n-i;j++){
                cout<<"@"; // for starting space 
            } 
            for(j=1;j<=n;j++){
                if(j==1||j==n){ // for pos j=1 & j=n, * is printed for creating hollow rhombus effect.
                    cout<<"*";
                }else{ // in rest of the position fill with space
                    cout<<"@";
                }
            }
        }
    cout<<endl;    
    }

return 0;
}