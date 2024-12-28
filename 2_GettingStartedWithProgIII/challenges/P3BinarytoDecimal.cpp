/*
Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.


Input Format

Constraints
0 < N <= 1000000000


Output Format

Sample Input
101010
Sample Output
42
Explanation
For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,i=0,rem,result=0;
    cin>>n;
    while(n>0){
        rem=n%10;
        int deci=rem*pow(2,i);
        result=result+deci;
        i++;
        n=n/10;

    }
    cout<<result;
    return 0;

}