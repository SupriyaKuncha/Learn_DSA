/*
Given a series of N Integers, check if it is possible to split sequence into two sequences -
s1 to si and si to sN such that first sequence is strictly decreasing and second is strictly increasing. Print true/false as output.


Input Format
First line contains a single integer N denoting the number of elements int the series.
Next N lines contain a single integer each denoting the elements of the array S.


Constraints
0 < N < 1000 Each number in sequence S is > 0 and < 1000000000


Output Format
Print boolean output - "true" or "false" defining whether the sequence is increasing - decreasing or not.


Sample Input
5 
1 
2 
3 
4 
5
Sample Output
true
Explanation
Carefully read the conditions to judge which all sequences may be valid. Don't use arrays or lists.
*/


#include<iostream>
#include<climits>
using namespace std;
void increasing(int n){
    int num,seqNum=INT_MIN, result,flag=0;
        for (int i=0;i<n;i++){
            cin>>num;
            if( 0<num< 1000000000)
            if(num>seqNum){
                result=true;
                // cout<<flag<<endl;
            }else{            
                result=false;
                flag=1;
                // cout<<flag<<endl;

            }
            seqNum=num;
           
    }
    if(flag==0){
        cout<<"true";
    }else{
        cout<<"false";
    }
}
int main(){

    int n,num,seqNum=INT_MIN;
    cin>>n;
    if(0 < n < 1000){
    increasing(n);
    }


}