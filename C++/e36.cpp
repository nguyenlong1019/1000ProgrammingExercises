#include<iostream>
#include<math.h>

using namespace std;

int fac(int num)
{
    int res = 1;
    for(int i = 1; i <= num; i++)
        res *= i;
    return res;
}

int main() {
    // canbac2(n! + canbac2((n-1)! + canbachai((n-2)! +... + canbac2(2! + canbachau(1!))))): n dấu căn
    int n;
    float res;
    while (1) {
        cin >> n;
        if (n >= 1) break;
    }
    res = sqrt(fac(1));
    for(int i = 2; i <= n; i++)
    {
        res = sqrt(fac(i) + res);
    }
    cout << res << endl;
    // n = 1 -> res = 1
    // n = 5 -> res = 11.1882
    return 0;
}