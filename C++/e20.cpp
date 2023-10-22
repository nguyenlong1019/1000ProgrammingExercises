#include<iostream>
using namespace std;

int main() {
    // in ra tất cả các ước số nguyên dương n
    int n;
    while(1) {
        cin >> n;
        if (n >= 1) break;
    }
    for(int i = 1; i <= n; i++)
        if (n % i == 0) cout << i << " ";
    cout << endl;
    // n = 0 => 1 2 5 10
    return 0;
}