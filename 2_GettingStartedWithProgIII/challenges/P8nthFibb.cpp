#include<iostream>
using namespace std;
int main(){
    int N,i=2,f1=0,f2=1,f3;
    cin>>N;
    if(0 <= N <= 1000){
        if(N==0){
            cout<<f1<<endl;
        }else if(N==1){
            cout<<f2<<endl;
        }else{
            while(i<N+1){
            f3=f1+f2;
            f1=f2;
            f2=f3;
            if(i==N){
                cout<<f3<<endl;
            }

            i++;
        }
        }
        
    }
}
/*Question: 
Take N as input. Print Nth Fibonacci Number, given that the first two numbers in the Fibonacci Series are 0 and 1.


Input Format

Constraints
0 <= N <= 1000


Output Format

Sample Input
10
Sample Output
55
Explanation
The 0th fibonnaci is 0 and 1st fibonnaci is 1.


*/