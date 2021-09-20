#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, input1, input2;
    vector<pair<int, int>> v;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input1 >> input2;
        v.push_back(make_pair(input1, input2));
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < n; ++i) {
        cout << v[i].first << " " << v[i].second << '\n';
    }
    
    return 0;
}
