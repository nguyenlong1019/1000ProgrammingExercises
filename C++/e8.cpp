#include<iostream>
using namespace std;

int main() {
    // 1/2 + 3/4 + 5/6 + ... + (2n + 1) / (2n + 2)
    int n;
    float sum = 0;
    cin >> n;
    for(int i = 0; i <= n; i++)
        sum += (i*2.0+1)/(2*i+2);
    cout << sum << endl;
    // n = 5 => sum = 4.775
    return 0;
}