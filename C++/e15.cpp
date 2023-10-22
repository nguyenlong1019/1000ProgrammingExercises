#include<iostream>
using namespace std;

int sum(int n)
{
    int res = 0;
    for(int i = 1; i <= n; i++)
        res += i;
    return res;
}

int main () {
    // 1 + 1/(1+2) + ... + 1/(1+2+...+n)
    int n;
    double res = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
        res += 1.0/sum(i);
    cout << res << endl;
    // n = 5 => res = 5/3 hoặc 1.666666666666...7
    return 0;
}