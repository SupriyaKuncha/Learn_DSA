#include<iostream>
#include<climits>
using namespace std;
int main() {
	int i,num;
	int largest = INT_MIN;// 
	for(i=1;i<=3;i++){
		cin>>num;
		if(num>largest){
			largest = num;
		}
	}
	cout<<largest;
	return 0;
}

/* Question       
Input three numbers, print the largest of these numbers


Input Format
Three numbers (both positive and negative numbers are allowed)


Constraints

Output Format
the largest number


Sample Input
5 7 4
Sample Output
7

*/