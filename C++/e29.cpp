#include<iostream>
using namespace std;

int main() {
    // tìm ước số lẻ lớn nhất của số nguyên dương n
    int n;
    while (1) {
        cin >> n;
        if (n >= 1) break;
    }
    for(int i = n; i >= 1; i--)
    {
        if (n % i == 0 && i % 2 != 0)
        {
            cout << i << endl;
            break;
        }
    }
    // n = 100 => res = 25
    return 0;
}