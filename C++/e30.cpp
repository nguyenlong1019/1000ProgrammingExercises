#include<iostream>
using namespace std;

bool isPerfectNumber(int n)
{
    int sum = 0;
    for(int i = 1; i < n; i++)
    {
        if (n % i == 0) sum += i;
    }
    return sum == n;
}

int main() {
    // kiểm tra xem số nguyên dương n có phải số hoàn thiện hay không?
    int n;
    while (1) {
        cin >> n;
        if (n >= 1) break;
    }
    isPerfectNumber(n) ? cout << "YES" : cout << "NO" << endl;
    // n = 6 => YES
    return 0;
}