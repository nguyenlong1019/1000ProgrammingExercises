#include<iostream>
using namespace std;

int main() {
    // 1 + 2 + 3 + ... + n
    int n, sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
        sum += i;
    cout << sum << endl;
    // VD: n = 10 => sum = 55
    return 0;
}