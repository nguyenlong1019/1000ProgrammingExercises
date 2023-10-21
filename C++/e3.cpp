#include<iostream>
using namespace std;

int main() {
    // 1 + 1/2 + 1/3 + ... + 1/n
    int n;
    float sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
        sum += 1.0/i;
    cout << sum << endl;
    // n = 5 => sum = 2.28333 (vô hạn số 3)
    return 0;
}