#include<iostream>
using namespace std;

int main() {
    // in ra tổng tất cả các ước số nguyên dương n
    int n, sum = 0;
    while(1) {
        cin >> n;
        if (n >= 1) break;
    }
    for(int i = 1; i <= n; i++)
        if (n % i == 0) sum += i;
    cout << sum << endl;
    // n = 10 => sum = 18
    return 0;
}