/*
Take N (number of rows), print the following pattern (for N = 4)
0
1 1
2 3 5
8 13 21 34


Input Format

Constraints
0 < N < 100


Output Format

Sample Input
4
Sample Output
0 
1    1 
2    3     5 
8   13    21    34
Explanation
Each number is separated from other by a tab. For given input n, You need to print n(n+1)/2 fibonacci numbers. Kth row contains , next k fibonacci numbers.
*/
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int end=(n*(n+1))/2;
    int f1=0,f2=1,f3=f1+f2;
    for(i=1;i<=n;i++){
        if(i==1){
            cout<<f1<<"     ";
        }else if(i==2){
            for(j=1;j<=i;j++){
                if(j==1){
                    cout<<f2<<"     ";
                }else{
                    cout<<f3;
                }
            }
        }else {
            for(j=1;j<=i;j++){
            f1=f2;
            f2=f3;
            f3=f1+f2;
            cout<<f3<<"     ";
            }
        }

            cout<<endl;
        }
    return 0;
}