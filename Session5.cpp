#include<bits/stdc++.h>

using namespace std;


int add(int x, int y)
{
    int result = x + y;
    return result;
}

void printify(string fname, string lname); // decl


double SI(double p,double t, double r=2.5)
{
    double interest = p*r*t/100;
    return interest;
}
// random rand() 0-1
void swap1(int , int ); // it takes two integers and awaps // by value
void swap2(int &, int &); // by reference
int main()
{
    

    int a=1, b=2;
    cout<<"a="<<a<<"b="<<b<<'\n';
    swap1(a,b); // does not affect on original variables
    cout<<"a="<<a<<"b="<<b<<'\n';
    // reference method
    swap2(a,b);
    cout<<"a="<<a<<"b="<<b<<'\n';
    // refernece varibale;
    int x=1,y=2;
    x=y; // copies the val of y to x
    int &k=x; // k is another name of x 
    // if i use x or k both will point to one
    swap(a,b); 
    cout<<(&x)<<'\n'; // &->ref.
                    // *->deref.
    cout<<*(&x)<<'\n';
    
    return 0;
}

void printify(string fname, string lname) // def
{
    cout<<fname<<' '<<lname<<'\n';
}
void swap1(int a, int b)
{
    cout<<"function is called!\n";
    cout<<"a="<<a<<"b="<<b<<'\n';

    int temp=a;
    a=b; 
    b=temp;

    cout<<"a="<<a<<"b="<<b<<'\n';
    cout<<"function ends\n";
}
void swap2(int &a, int &b)
{
    cout<<"function is called!\n";
    cout<<"a="<<a<<"b="<<b<<'\n';

    int temp=a;
    a=b; 
    b=temp;

    cout<<"a="<<a<<"b="<<b<<'\n';
    cout<<"function ends\n";
}