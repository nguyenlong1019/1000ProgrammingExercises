#include<iostream>
using namespace std;

int main() {
    // 1/1*2 + 1/2*3 + 1/3*4 + ... + 1/n*(n+1)
    int n;
    float sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
        sum += 1.0/(i*(i+1));
    cout << sum << endl;
    // n = 5 => sum = 0.833333 .... 3     =  5/6
    return 0;
}