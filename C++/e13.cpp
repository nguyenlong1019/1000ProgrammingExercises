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
    // x^2 + x^4 + x^6 + ... + x^2n
    int x, n, res = 0;
    cin >> x >> n;
    for(int i = 1; i <= n; i++)
        res += power(x,2*i);
    cout << res << endl;
    // x = 2, n = 5 => res = 1364
    return 0;
}