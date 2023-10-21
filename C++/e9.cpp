#include<iostream>
using namespace std;

int main() {
    // 1*2*3*...*n
    int n;
    float res = 1;
    while (1) {
        cin >> n;
        if (n >= 1) break;
    }
    for(int i = 1; i <= n; i++)
        res *= i;
    cout << res << endl;
    // n = 5 => res = 120
    return 0;
}