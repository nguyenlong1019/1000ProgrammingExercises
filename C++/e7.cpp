#include<iostream>
using namespace std;

int main() {
    // 1/2 + 2/3 + 3/4 + ... + n/(n+1)
    int n;
    float sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
        sum += (i*1.0)/(i+1);
    cout << sum << endl;
    // n = 5 => sum = 3.55
    return 0;
}