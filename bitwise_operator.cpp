// entc b2, prn 24070123120

// bitwise operator
#include<iostream>
using namespace std;

int main()
{   
    int a =9; //1001
    int b=8; //1000
    
    //bitwise AND
    int bitwise_and = a&b;

    //bitwise OR
    int bitwise_or = a|b;

    //bitwise XOR
    int bitwise_xor = a^b;

    //bitwise NOT
    int bitwise_not = ~a;

    //bitwise left shift
    int bitwise_left_shift = a<<1;

    //bitwise right shift
    int bitwise_right_shift = a>>1;

    cout<<"AND : "<<bitwise_and<<endl;
    cout<<"OR : "<<bitwise_or<<endl;
    cout<<"XOR : "<<bitwise_xor<<endl;
    cout<<"NOT : "<<bitwise_not<<endl;
    cout<<"left shift : "<<bitwise_left_shift<<endl;
    cout<<"right shift : "<<bitwise_right_shift<<endl;

}


/* output of this code 

AND : 8
OR : 9
XOR : 1
NOT : -10
left shift : 18
right shift : 4

*/
