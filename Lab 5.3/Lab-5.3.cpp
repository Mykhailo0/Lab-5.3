// Лабораторна робота № 5.3


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double j(const double x);

int main()
{
    double gp, gk, z;
    int n;
    cout << "gp = "; cin >> gp;
    cout << "gk = "; cin >> gk;
    cout << "n = "; cin >> n;
    double dg = (gk - gp) / n;
    double k = gp;
    while (k <= gk)
    {
        z = j(k) + pow(j(k - 1), 2) + 2 * j(1);
        cout << setw(7) << k << setw(11) << z << endl;
        k += dg;
    }
    return 0;
}

double j(const double x)
{
    if (abs(x) >= 1)
    {
        return
            (sin(x) + 1) / (cos(x) * cos(x) + exp(x));
    }
    else
    {
        double S = 0;
        int k = 0;
        double a = 1;
        S = a;
        do
        {
            k++;
            double R = x * x / ((2 * k + 1) * (2 * k + 2));
            a *= R;
            S += a;
        } while (k < 7);
        return S / (cos(2 * x));
    }
}