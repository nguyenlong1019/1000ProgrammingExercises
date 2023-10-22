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

int fac(int num)
{
    int res = 1;
    for(int i = 1; i <= num; i++)
        res *= i;
    return res;
}

int main () {
    // 1 + x + x^3/3! + x^5/5! + ... + x^(2n+1)/(2n+1)!
    int x, n;
    double res = 1.0;
    cin >> x >> n;
    for(int i = 0; i <= n; i++)
        res += 1.0*power(x,2*i+1)/fac(2*i+1);
    cout << res << endl;
    // x = 2, n = 5 => res = 4.62686
    return 0;
}