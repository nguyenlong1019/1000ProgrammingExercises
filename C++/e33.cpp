#include<iostream>
#include<math.h>

using namespace std;

int main() {
    // canbac2(2 + canbac2(2 + canbachai(2 + ....))): n dấu căn
    int n;
    float res;
    while (1) {
        cin >> n;
        if (n >= 1) break;
    }
    res = sqrt(2);
    for(int i = 2; i <= n; i++)
    {
        res = sqrt(2 + res);
    }
    cout << res << endl;
    // n = 1 -> res = can 2
    // n = 5 -> res = 1.99759
    return 0;
}