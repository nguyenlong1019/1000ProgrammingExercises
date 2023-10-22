#include<iostream>
using namespace std;

int power(int x, int n)
{
    int res = 1;
    for(int i = 1; i <= n; i++)
        res *= x;
    return res;
}

int main () {
    // x + x^2 + x^3 + ... + x^n
    int x, n, res = 0;
    cin >> x >> n;
    for(int i = 1; i <= n; i++)
        res += power(x,i);
    cout << res << endl;
    // x = 2, n = 5 => res = 62
    return 0;
}