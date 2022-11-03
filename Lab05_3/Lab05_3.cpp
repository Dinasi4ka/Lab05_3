// Lab05_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double s(const double x);

int main()
{
    double tp, tk, z;
    int n;

    cout << "tp = "; cin >> tp;
    cout << "tk = "; cin >> tk;
    cout << "n = "; cin >> n;

    cout << fixed;
    cout << "-----------------------------------------" << endl;
    cout << "|" << setw(7) << "t" << " |"
        << setw(10) << "z" << " |"
        << endl;
    cout << "-----------------------------------------" << endl;


    double dg = (tk - tp) / n;
    double t = tp;

    while (t <= tk)
    {
        z = s(2 * t + 1) + 2 * s(pow(t, 2)) + sqrt(s(1));
        t += dg;

        cout << "|" << setw(7) << setprecision(2) << t << " |"
            << setw(10) << setprecision(5) << z << " |"
            << endl;
    }
    cout << "-----------------------------------------" << endl;
    return 0;
}
double s(const double x)
{
    if (abs(x) >= 1 && x==0)
        return (pow(cos(x),2)+1)/exp(x);
    else
    {
        double S = 0;
        int k = 0;
        double a = 2*x;
        S = a;
        do
        {
            k++;
            double R = 2*pow(x,2)/(2*pow(k,2)+k);
            a *= R;
            S += a;
        } while (k < 4);
        return (1/sin(2*x))*S;
    }
}

