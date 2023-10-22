#include<iostream>
using namespace std;

bool isSquareNumber(int n)
{
    for(int i = 1; i <= n; i++)
        if (i * i == n) return true;
    return false;
}

int main() {
    // kiểm tra xem số nguyên dương n có phải số chính phương hay không?
    int n;
    while (1) {
        cin >> n;
        if (n >= 1) break;
    }
    isSquareNumber(n) ? cout << "YES" : cout << "NO" << endl;
    // n = 2 , 3, 5, 31 => YES
    return 0;
}