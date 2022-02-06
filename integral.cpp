#include<bits/stdc++.h>

using namespace std;

long double integrate(double a, double b, double (*f)(double), double dx=1e-6)
{
    long double result=0;
    double x=a;
    while(x<b)
    {
        result+=f(x)*dx;
        x+=dx;
    }
    return result;
}

int main()
{
    long double result=integrate(0,M_PI,sin);
    cout<<result;
    return 0;
}