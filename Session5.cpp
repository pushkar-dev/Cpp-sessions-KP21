#include<bits/stdc++.h>

using namespace std;


int add(int x, int y)
{
    int result = x + y;
    return result;
}
void printify(string fname, string lname);
void printify(string fname, string lname)
{
    cout<<fname<<' '<<lname;
}

double SI(double p,double t, double r=2.5)
{
    double interest = p*r*t/100;
    return interest;
}

int main()
{
    printify("Pushkar", "Patel");
    
    double result1=SI(1500,3.0);

    double result2=SI(1500,3.0,3.15);
    
    return 0;
}