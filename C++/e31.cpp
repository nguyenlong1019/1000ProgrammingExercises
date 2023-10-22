#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1) return false;
    for(int i = 2; i < n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    // kiểm tra xem số nguyên dương n có phải số nguyên tố hay không?
    int n;
    while (1) {
        cin >> n;
        if (n >= 1) break;
    }
    isPrime(n) ? cout << "YES" : cout << "NO" << endl;
    // n = 2 , 3, 5, 31 => YES
    return 0;
}