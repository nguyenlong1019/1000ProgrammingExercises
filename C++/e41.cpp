#include<iostream>
using namespace std;

int main() {
    // 1/(1 + 1/(1+1/(1+1/(1+...1/(1+1))))) có n dấu phân số
    int n;
    float res = 0;
    while (1) {
        cin >> n;
        if (n >= 1) break;
    }
    res = 1.0/2;
    for(int i = 2; i <= n; i++)
    {
        res = 1.0/(res+1);
    }
    cout << res << endl;
    // n = 1 -> res = 0.5
    // n = 5 -> res = 8/13 hoặc 0.615385
    return 0;
}