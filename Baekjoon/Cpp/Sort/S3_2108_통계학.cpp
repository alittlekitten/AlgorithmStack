#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    // 2108 통계학
    // 정렬

    int n, input;
    double sum = 0;
    int mid = 0;
    vector <int> v;
    map<int, int> m;
    int max = -4000;
    int min = 4000;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        sum += input; // 1
        v.push_back(input); // 2
        m[input]++; // 3
        // 4
        if (input > max) max = input;
        if (input < min) min = input;
    }

    vector<pair<int, int>> map_to_vector(m.begin(), m.end());
    sort(map_to_vector.begin(), map_to_vector.end(), cmp);
    sort(v.begin(), v.end());
    if (map_to_vector[0].second == map_to_vector[1].second) cout << round(sum / n) << '\n' << v[n / 2] << '\n' << map_to_vector[1].first << '\n' << max - min;
    else cout << int(round(sum / n)) << '\n' << v[n / 2] << '\n' << map_to_vector[0].first << '\n' << max - min;
    
    return 0;
}
