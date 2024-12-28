/*
Given a binary number ,help Von Neuman to find out its decimal representation. For eg 000111 in binary is 7 in decimal.


Input Format
The first line contains N , the number of binary numbers. Next N lines contain N integers each representing binary represenation of number.


Constraints
N<=1000 Digits in binary representation is <=16. 


Output Format
N lines,each containing a decimal equivalent of the binary number.


Sample Input
4
101
1111
00110
111111
Sample Output
5
15
6
63
Explanation
For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.
*/


//using strings
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n; // number of binary numbers

    // Ensure the number of binary numbers does not exceed the constraint
    if (n > 1000) {
        cerr << "Error: Number of binary numbers exceeds the constraint of 1000." << endl;
        return 1;
    }

    while(n > 0) { // loop for n binary numbers
        string bin_val;
        cin >> bin_val; // binary number as string

        // Ensure the length of the binary number does not exceed the constraint
        if (bin_val.length() > 16) {
            cerr << "Error: Length of binary number exceeds the constraint of 16 digits." << endl;
            return 1;
        }

        int decimal_val = 0; // decimal number

        // Convert binary to decimal
        int len = bin_val.length();
        for(int i = 0; i < len; i++) {
            if(bin_val[len - i - 1] == '1') {
                decimal_val += pow(2, i);
            }
        }

        cout << decimal_val << endl; // output the decimal value
        n--;
    }

    return 0;
}