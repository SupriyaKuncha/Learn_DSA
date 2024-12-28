/*
INVERSE OF NUMBER
Take the following as input.
A number
Assume that for a number of n digits, the value of each digit is from 1 to n and is unique. 
E.g. 32145 is a valid input number.
Write a function that returns its inverse, where inverse is defined as follows

Inverse of 32145 is 12543.
 In 32145, “5” is at 1st place, therefore in 12543, “1” is at 5th place; in 32145, “4” is at 2nd place,
  therefore in 12543, “2” is at 4th place.

Print the value returned.

*/


#include <bits/stdc++.h>
using namespace std;
int main(){
    int number,position=1,digit,powerTenPlace=0,inverse=0;
    /* number - input taken
    -- digit - exracted using modulo 
    -- position - track the position of each digit in number
    -- powerTenPlace - this is used to place the inversed value at desired
        for example, there is value 3 at position 2, it's inverse means value 2 at position 3
        value 2 is placed at 100'th place which means 
        2*(10^(digit-1))= 2*(10^(3-1))= 2*(10^2)=200;
        for any digit: position*(10^(digit-1))
    
    */
    cin>>number;
    while(number>0){
        digit=number%10;
        // cout<<"Digit extracted: "<<digit<<endl;
        // cout<<"current position: "<<position<<endl;
        powerTenPlace=position*pow(10,digit-1);
        // cout<<"powerTenplace: "<<powerTenPlace<<endl;
        inverse=inverse+powerTenPlace;
        // cout<<"current inverseNumber: "<<inverse<<endl;
        number=number/10; 
        position++;

    }
    cout<<inverse<<endl;
    


}