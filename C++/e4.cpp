#include<iostream>
using namespace std;

int main() {
    // 1/2 + 1/4 + 1/6 + ... + 1/2n
    int n;
    float sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
        sum += 1.0/(2*i);
    cout << sum << endl;
    // n = 5 => sum = 1.1416666...7
    return 0;
}