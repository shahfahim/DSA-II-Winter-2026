#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    long long k;
    cin >> n >> m >> k;

    vector<long long> a(n), b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;
    int ans = 0;

    while (i < n && j < m) {

        if (abs(a[i] - b[j]) <= k) {
            // match found
            ans++;
            i++;
            j++;
        }
        else if (b[j] < a[i] - k) {
            // apartment too small
            j++;
        }
        else {
            // apartment too large
            i++;
        }
    }

    cout << ans << "\n";

    return 0;
}
