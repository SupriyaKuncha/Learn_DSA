#include<iostream>
using namespace std;
int main(){
    int N,rem,reverse_num=0;
    cin>>N;
    if(0 <= N <= 1000000000){
        while(N>0){
            rem=N%10;
            reverse_num=(reverse_num+rem)*10;
            N=N/10;
        }

        cout<<reverse_num/10<<endl;

    }
}
/*Question:

Take N as input, Calculate it's reverse also Print the reverse.


Input Format

Constraints
0 <= N <= 1000000000


Output Format

Sample Input
123456789
Sample Output
987654321
Explanation
You've to calculate the reverse in a number, not just print the reverse.

*/