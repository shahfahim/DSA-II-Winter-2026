#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    // {number_of_balls, distance_to_middle, index}
    set<tuple<int,int,int>> baskets;

    for(int i = 1; i <= m; i++) {
        int dist = abs(2*i - m - 1);
        baskets.insert({0, dist, i});
    }

    for(int ball = 1; ball <= n; ball++) {

        // Take best basket
        auto it = baskets.begin();
        auto [count, dist, index] = *it;

        cout << index << "\n";

        baskets.erase(it);

        // Increase count and reinsert
        baskets.insert({count + 1, dist, index});
    }

    return 0;
}
