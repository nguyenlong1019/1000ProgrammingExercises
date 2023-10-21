#include<iostream>
using namespace std;

double power(double x, double n)
{
    double res = 1;
    for(int i = 1; i <= n; i++)
        res *= x;
    return res;
}

int main() {
    // x^n
    double x, n;
    cin >> x >> n;
    cout << x << "^" << n << " = " << power(x,n) << endl;
    // x = 3, n = 5 => res = 243
    return 0;
}