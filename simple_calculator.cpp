//entc b2, PRN 24070123120

// program to use different operators
#include<iostream>
using namespace std;
int main()
{
    int num;
    int sum, diff, multi;
    float div;
    int n1, n2;
    
    cout<<" enter 1 to add 2 numbers\nenter 2 to subtract 2 numbers\nenter 3 to multiply 2 numbers\nenter 4 to divide 2 numbers\n";
    cout<<"enter a number from 1 to 4 \n";
    cin>>num;
    if(num==1)
    {
        cout<<"enter the numbers\n";
        cin>> n1 >> n2;
    
        sum=n1+n2;
        cout<< "the sum is : "<<sum;  
    }
    else if(num==2)
    {
        cout<<"enter the numbers\n";
         cin>>n1 >> n2;
        diff=n1-n2;
        cout<<"\nthe difference is : "<<diff;

    }
    else if (num==3)
    {
        cout<<"enter the numbers\n";
         cin>>n1 >> n2;
        multi=n1*n2;
        cout<<"the product is : "<<multi;

    }
    else if(num==4)
    {
        cout<<"enter the numbers\n";
         cin>>n1 >> n2;
        div=n1/n2;
        cout<<"\nthe division is : "<<div;
    }
    
}


/* output of this code

enter 1 to add 2 numbers
enter 2 to subtract 2 numbers
enter 3 to multiply 2 numbers
enter 4 to divide 2 numbers
enter a number from 1 to 4 
3
enter the numbers
45 5
the product is : 225

*/
