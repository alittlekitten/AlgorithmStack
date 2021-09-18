#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}

int main(){
    int n, input1;
    string input2;
    vector<pair<int, string>> v;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input1 >> input2;
        v.push_back(make_pair(input1, input2));
    }
    stable_sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < v.size(); ++i) {
        cout << v[i].first << " " << v[i].second << '\n';
    }

    return 0;
}
