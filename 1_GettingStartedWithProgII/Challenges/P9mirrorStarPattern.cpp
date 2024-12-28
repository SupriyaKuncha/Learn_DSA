/*
Take N (number of rows - only odd numbers allowed), print the following pattern (for N = 5).

      *
   *  *  *  
*  *  *  *  *  
   *  *  *
      *

Input Format

Constraints
0 < N < 10 (only odd numbers allowed)


Output Format

Sample Input
5
Sample Output
      *
    * * *
  * * * * *
    * * *
      *
Explanation
Each '*' is separated from other by a tab.*/
#include<iostream>
using namespace std;
int main(){
  int n,i,j;
  cin>>n;
  if(n%2!=0){
  //upper part
  for(i=1;i<=n/2+1;i++){
    //space
    for(j=1;j<=n/2+1-i;j++){
      cout<<"  ";
    }
    //star
    for(j=1;j<=2*i-1;j++){
      cout<<"* ";
    }
    //space
    for(j=1;j<=n/2+1-i;j++){
      cout<<"  ";
    }

    cout<<endl;
  }
  //lower part
  for(i=n/2;i>=1;i--){
    //space
    for(j=1;j<=(n/2)+1-i;j++){
      cout<<"  ";
    }
    //star
    for(j=1;j<=2*i-1;j++){
      cout<<"* ";
    }
    //space
    for(j=1;j<=n/2+1-i;j++){
      cout<<"  ";
    }
    cout<<endl;
  }
  }


 return 0; 
}