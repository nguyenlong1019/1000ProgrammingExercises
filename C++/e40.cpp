#include<iostream>
#include<math.h>

using namespace std;

float fac(float num)
{
    float res = 1;
    for(int i = 1; i <= num; i++)
        res *= i;
    return res;
}

int main() {
    // canbac2(x^n + canbac2(x^(n-1) + canbac2(x^(n-2) +... + canbac2(x )))): n dấu căn
    int x, n;
    float res;
    while (1) {
        cin >> x >> n;
        if (n >= 1) break;
    }
    res = sqrt(x);
    for(int i = 2; i <= n; i++)
    {
        res = sqrt((res + pow(x,i)));
    }
    cout << res << endl;
    // x = 2 n = 1 -> res = canbac2
    //  = 2 n = 5 -> res = 6.03186
    return 0;
}