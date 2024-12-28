/*
Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.


Input Format

Constraints
0 < N <= 1000000000


Output Format

Sample Input
63
Sample Output
77
Explanation
Both input and output are integers
*/

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int deci_val,octal_val=0,R,Q,pow_ten,i=0;
    cin>>deci_val;
    Q = deci_val / 8; //Quotient
    // cout<<"Quoitent"<<Q<<endl;
    // cout<<"#####"<<endl;
    if(deci_val>0 && deci_val<=1000000000){
        while(Q>0){
            R = deci_val % 8; //remainder
            // cout<<"Remainder"<<R<<endl;
            pow_ten = pow(10,i);
            // cout<<"POW_ten"<<pow_ten<<endl;
            octal_val = octal_val + R*pow_ten;
            // cout<<"Octal"<<octal_val<<endl;
            Q = deci_val / 8; //Quotient
            // cout<<"loop Q"<<Q<<endl;
            deci_val = deci_val / 8; 
            // cout<<"Deci_Val"<<deci_val<<endl;
            i++;
            
        }
        cout<<octal_val;
    }
    
return 0;
}