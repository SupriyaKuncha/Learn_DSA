/*
Read as input 5 Numbers and print the largest out of them


Input Format
5 Space Separated Numbers (both positive and negative)


Constraints

Output Format

Sample Input
2 4 7 -2 3
Sample Output
7
Explanation
In the given case 7 is largest among the given numbers.
*/
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,i=1,max=INT_MIN;
    while(i<=5){
        cin>>n;
        if(n>max){
            max=n;
        }
        i++;
    }
    cout<<max<<endl;
return 0;
}