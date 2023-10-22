#include<iostream>
#include<math.h>

using namespace std;

int main() {
    // canbac2(n + canbac2(n-1 + canbachai(n-1 +... + canbac2(2 + canbachau(1))))): n dấu căn
    int n;
    float res;
    while (1) {
        cin >> n;
        if (n >= 1) break;
    }
    res = sqrt(1);
    for(int i = 2; i <= n; i++)
    {
        res = sqrt(i + res);
    }
    cout << res << endl;
    // n = 1 -> res = 1
    // n = 5 -> res = 2.73588
    return 0;
}