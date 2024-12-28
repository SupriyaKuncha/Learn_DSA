#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
int main() {
	float a,b,c,x1,x2,D;
	cin>>a>>b>>c;
    //finding roots for quadratic equation
    D = (pow(b,2))-(4*a*c);
	x1 = ((-b)+sqrt(D))/(2*a);
	x2 = ((-b)-sqrt(D))/(2*a);

    if(D>0){
        //real and distinct
        cout<<"Real and Distinct"<<endl;
        if(x1<x2){
                cout<<x1<<" "<<x2;
            }else{
                cout<<x2<<" "<<x1;
            }

    }else if(D==0){
        //real and equal
        cout<<"Real and Equal"<<endl;
        cout<<x1<<" "<<x2;


    }else{
        // D<0 imaginary
        cout<<"Imaginary"<<endl;

    }

	return 0;
}

/* QUESTION 
Given coefficients of a quadratic equation , you need to print the nature of the roots (Real and Distinct , Real and Equal or Imaginary) and the roots.
If Real and Distinct , print the roots in increasing order.
If Real and Equal , print the same repeating root twice
If Imaginary , no need to print the roots.

Note : Print only the integer part of the roots.


Input Format
First line contains three integer coefficients a,b,c for the equation ax^2 + bx + c = 0.


Constraints
-100 <= a, b, c <= 100


Output Format
Output contains one/two lines. First line contains nature of the roots .The next line contains roots(in non-decreasing order) separated by a space if they exist. If roots are imaginary do not print the roots. Output the integer values for the roots.


Sample Input
1 -11 28
Sample Output
Real and Distinct
4 7
Explanation
The input corresponds to equation ax^2 + bx + c = 0. Roots = (-b + sqrt(b^2 - 4ac))/2a , (-b - sqrt(b^2 - 4ac))/2a

*/