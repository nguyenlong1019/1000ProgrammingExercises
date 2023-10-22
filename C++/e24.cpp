#include<iostream>
using namespace std;

int main() {
    // liệt kê tất cả các ước số lẻ của số nguyên dương n
    int n;
    while(1) {
        cin >> n;
        if (n >= 1) break;
    }
    for(int i = 1; i <= n; i++)
        if (n % i == 0 && i % 2 != 0) cout << i << " "; 
    cout << endl;
    // n = 10 => 1 5
    return 0;
}