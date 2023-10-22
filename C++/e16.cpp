#include<iostream>
using namespace std;

int power(int x, int n)
{
    int res = 1;
    for(int i = 1; i <= n; i++)
        res *= x;
    return res;
}

int sum(int n)
{
    int res = 0;
    for(int i = 1; i <= n; i++)
        res += i;
    return res;
}

int main () {
    // x + x^2/(1+2) + ... + x^n/(1+2+...+n)
    int x, n;
    double res = 0;
    cin >> x >> n;
    for(int i = 1; i <= n; i++)
        res += 1.0*power(x,i)/sum(i);
    cout << res << endl;
    // x = 2, n = 5 => res = 8.4
    return 0;
}