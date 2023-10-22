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
    // x^3 + x^5 + x^7 + ... + x^(2n+1)
    int x, n, res = 0;
    cin >> x >> n;
    for(int i = 1; i <= n; i++)
        res += power(x,2*i+1);
    cout << res << endl;
    // x = 2, n = 5 => res = 2728
    return 0;
}