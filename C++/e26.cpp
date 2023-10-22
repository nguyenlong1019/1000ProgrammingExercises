#include<iostream>
using namespace std;

int main() {
    // tính tích tất cả các ước số lẻ của số nguyên dương n
    int n, res = 1;
    while(1) {
        cin >> n;
        if (n >= 1) break;
    }
    for(int i = 1; i <= n; i++)
        if (n % i == 0 && i % 2 != 0) res *= i; 
    cout << res << endl;
    // n = 10 => res = 5
    return 0;
}