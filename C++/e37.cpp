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
    // canbacn(n + canbac(n-1)cua((n-1) + canbac(n-2)cua((n-2)! +... + canbac2(2 )))): n - 1 dấu căn
    int n;
    float res;
    while (1) {
        cin >> n;
        if (n >= 2) break;
    }
    res = pow(2.0, 1.0/2);
    for(int i = 3; i < n; i++)
    {
        res = pow((res + i), 1.0/i);
    }
    cout << res << endl;
    // n = 2 -> res = can2
    // n = 6 -> res = 1.45589
    return 0;
}