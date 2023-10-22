#include<iostream>
using namespace std;

int main() {
    // đếm số lượng tất cả các ước số chẵn của số nguyên dương n
    int n, res = 0;
    while(1) {
        cin >> n;
        if (n >= 1) break;
    }
    for(int i = 1; i <= n; i++)
        if (n % i == 0 && i % 2 == 0) res += 1; 
    cout << res << endl;
    // n = 10 => res = 2
    return 0;
}