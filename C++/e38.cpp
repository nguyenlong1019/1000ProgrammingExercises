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
    // canbac(n+1)cua(n + canbac(n)cua((n-1) + canbac(n-1)cua((n-2)! +... + canbac2(1 )))): n dấu căn
    int n;
    float res;
    while (1) {
        cin >> n;
        if (n >= 1) break;
    }
    res = pow(1.0, 1.0/2);
    for(int i = 2; i <= n; i++)
    {
        res = pow((res + i), 1.0/(i+1));
    }
    cout << res << endl;
    // n = 1 -> res = can2
    // n = 5 -> res = 1.36272
    return 0;
}