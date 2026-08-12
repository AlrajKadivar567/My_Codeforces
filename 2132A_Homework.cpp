#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long lenA; 
    cin >> lenA;
    string strA; 
    cin >> strA;
 
    long long lenB; 
    cin >> lenB;
    string strB; 
    cin >> strB;
 
    string ops; 
    cin >> ops;
 
    deque<char> dq(strA.begin(), strA.end());
 
    for (long long i = 0; i < lenB; i++) {
        if (ops[i] == 'V') {
            dq.push_front(strB[i]);
        } else {
            dq.push_back(strB[i]);
        }
    }
 
    string result(dq.begin(), dq.end());
    cout << result << "\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int testCases = 1;
    cin >> testCases;
    while (testCases--) {
        solve();
    }
    return 0;
}