#include <iostream>
#include <math.h>
using namespace std;

int potencia(int num, int expo)
{
    int res=1;
    for (int i = 1; i <= expo; i++)
        res=res*num;
    return res;
}
double factorial(int num)
{
    double fac = 1;
    for (int i = 1; i <= num; i++)
        fac = fac * i;     
    return fac;
}
double serie(double n)
{
    double rserie;
    double a;
    for (double i = 2; i <= n; i++)
        for (double k = 1; k <= n; k++)
            rserie=a+(factorial(i)/potencia(5,k));            
    return rserie;
}

int main()
{
    cout<<endl<<"El resultado cuando N es 5 es: "<<serie(5);
}