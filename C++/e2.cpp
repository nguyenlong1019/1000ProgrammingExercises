#include<iostream>
using namespace std;

int main() {
    // 1^2 + 2^2 + 3^2 + ... + n^2
    int n, sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
        sum += i*i;
    cout << sum << endl;
    // n = 5 => sum = 55
    return 0;
}