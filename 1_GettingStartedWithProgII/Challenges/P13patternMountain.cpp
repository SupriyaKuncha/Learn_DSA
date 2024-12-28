/*
Take N (number of rows), print the following pattern (for N = 4).

                       1           1
                       1 2       2 1  
                       1 2 3   3 2 1
                       1 2 3 4 3 2 1   

Input Format

Constraints
0 < N < 10


Output Format

Sample Input
4
Sample Output
1						1
1	2				2	1
1	2	3		3	2	1
1	2	3	4	3	2	1

*/
#include<iostream>
using namespace std;
int main(){

    int n,i,j;
    cin>>n;
    if(n>0&&n<10){
        for(i=1;i<=n;i++){
        //left side
        //numbers
        for(j=1;j<=i;j++){
            cout<<j<<"  ";
        }
        //space
        for(j=1;j<=n-i;j++){
            cout<<"   ";
        }

        //right side
        //space
        for(j=i;j<=n-2;j++){
            cout<<"   ";
        }
        //numbers
        for(j=i;j>=1;j--){
            if(j!=n){
               cout<<j<<"  "; 
            }
            
        }


            cout<<endl;
        }

    }
return 0;
}