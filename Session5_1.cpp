#include<bits/stdc++.h>

using namespace std;

double area(double, double); // Prototype
void func();
int main()
{
    double x = 3.5, y = 7.2, res;
    res = area( x, y+1); // Call
    // To output to two decimal places:
    cout << fixed << setprecision(2);
    cout << "\n The area of a rectangle "
    << "\n with width " << setw(5) << x
    << "\n and length " << setw(5) << y+1
    << "\n is " << setw(5) << res
    << endl;
    //func();
    return 0;
}
// Defining the function area():
// Computes the area of a rectangle.
double area( double width, double len)
{
    return (width * len); // Returns the result.
}

void func()
{
    int res= 1/0;
    cout<<res<<'\n';
}
