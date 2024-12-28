#include<iostream>
using namespace std;
int main(){
char range;
cin>>range;
if(range<=90 && range>=65){
    cout<<"UPPERCASE"<<endl;
}else if(range<=122 && range>=97){
    cout<<"lowercase"<<endl;
}else{
    cout<<"Invalid"<<endl;
}
return 0;
}


/* QUESTION
Print "lowercase" if user enters a character between 'a-z' , Print "UPPERCASE" is character lies between 'A-Z' and print "Invalid" for all other characters like $,.^# etc.


Input Format
Single Character .


Constraints
-


Output Format
lowercase UPPERCASE Invalid


Sample Input
$
Sample Output
Invalid
Explanation
-

*/