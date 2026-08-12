#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    vector<int> ans;
    int tests;
    cin >> tests;
 
    while (tests--) {
        int k, n;
        cin >> k >> n;
 
        vector<int> values(k);
 
        for (int i = 0; i < k; i++) {
            cin >> values[i];
        }
 
        int max_dist = values[0];
 
for (int i = 1; i < k; i++) {
    if (values[i] - values[i - 1] > max_dist) {
        max_dist = values[i] - values[i - 1];
    }
}
 
if (2 * (n - values[k - 1]) > max_dist) {
    max_dist = 2 * (n - values[k - 1]);
}
 
        ans.push_back(max_dist);
    }
 
    for (int num : ans) {
        cout << num << "\n";
    }
}