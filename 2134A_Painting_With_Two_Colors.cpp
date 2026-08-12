#include <iostream>
using namespace std;
 
void solve() {
    long long n, a, b;
    cin >> n >> a >> b;
 
    if ((n - b) % 2 != 0) {
        cout << "NO\n";
        return;
    }
 
    if (a <= b) {
        cout << "YES\n";
        return;
    }
 
    if ((n - a) % 2 == 0) {
        cout << "YES\n";
        return;
    }
 
    cout << "NO\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int testCases;
    cin >> testCases;
    while (testCases--) {
        solve();
    }
 
    return 0;
}