#include<iostream>
using namespace std;

int main() {
    // 1 + 1/3 + 1/5 + ... + 1/(2n+1)
    int n;
    float sum = 1;
    cin >> n;
    for(int i = 1; i <= n; i++)
        sum += 1.0/(2*i+1);
    cout << sum << endl;
    // n = 5 => sum = 1.878210678
    return 0;
}