#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long current_sum = v[0];
    long long best_sum = v[0];

    for (int i = 1; i < n; i++) {
        current_sum = max(v[i], current_sum + v[i]);
        best_sum = max(best_sum, current_sum);
    }

    cout << best_sum << "\n";

    return 0;
}
