#include<iostream>
using namespace std;

int fac(int num)
{
    int res = 1;
    for(int i = 1; i <= num; i++)
        res *= i;
    return res;
}

int main () {
    // 1 + 1*2 + 1*2*3 + ... + 1*2*3*...*n
    int n, res = 0;
    while(1) {
        cin >> n;
        if (n >= 1) break;
    }
    for(int i = 1; i <= n; i++)
        res += fac(i);
    cout << res << endl;
    // n = 5 => res = 153
    return 0;
}