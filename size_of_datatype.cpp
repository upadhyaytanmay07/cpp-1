//entc b2, prn 24070123120

#include<iostream>
#include<string>

using namespace std;
//program to find the size of the datatype entered
int main()
{
    int i;
    cout<<"enter value of i : ";
    cin>>i;
    cout<<"the size of i is "<<sizeof(i)<<" bytes\n";

    char ch;
    cout<<"enter the value of ch : ";
    cin>>ch;
    cout<<"the size of ch is : "<<sizeof(ch)<<" bytes\n";
    
    float f;
    cout<<"enter the value of f : ";
    cin>>f;
    cout<<"the size of f is : "<<sizeof(f)<<" bytes\n";

    string s;
    cout<<"enter the value of s : ";
    cin>>s;
    cout<<"the size of s is : "<<sizeof(s)<<" bytes\n";

    double d;
    cout<<"enter the value of d : ";
    cin>>d;
    cout<<"the size of d is : "<<sizeof(d)<<" bytes\n";
    
    // bool b;
    // cout<<"enter the value of b : ";
    // cin>>b;
    // cout<<"the size of b is : "<<sizeof(b)<<" bytes\n";

    long int l;
    cout<<"enter the value of l : ";
    cin>>l;
    cout<<"the size of l is : "<<sizeof(l)<<" bytes\n";

}

/* output of this code

enter value of i : 45
the size of i is 4 bytes
enter the value of ch : c
the size of ch is : 1 bytes
enter the value of f : 34.5
the size of f is : 4 bytes
enter the value of s : string
the size of s is : 24 bytes
enter the value of d : 2342
the size of d is : 8 bytes
enter the value of l : 123445656
the size of l is : 4 bytes

*/
