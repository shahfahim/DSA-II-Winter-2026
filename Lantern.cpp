#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long l;
    cin >> n >> l;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    double max_gap = 0;

    // Maximum gap between consecutive lanterns
    for (int i = 1; i < n; i++) {
        max_gap = max(max_gap, (double)(a[i] - a[i-1]));
    }

    double left_gap = a[0];
    double right_gap = l - a[n-1];

    double result = max({left_gap, right_gap, max_gap / 2.0});

    cout << fixed << setprecision(10) << result << "\n";

    return 0;
}
