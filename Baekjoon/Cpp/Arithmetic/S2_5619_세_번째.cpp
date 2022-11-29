#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 5619 세 번째
    // 수학
    int n, input;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    
    vector<int> targetVector;
    // 4 미만
    if (v.size() < 4) {
        for (int i = 0; i < v.size(); ++i) {
            for (int j = 0; j < v.size(); ++j) {
                if (i != j) {
                    string s = to_string(v[i]) + to_string(v[j]);
                    targetVector.push_back(stoi(s));
                }
            }
        }
        sort(targetVector.begin(), targetVector.end());
        cout << targetVector[2];
    } else {
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                if (i != j) {
                    string s = to_string(v[i]) + to_string(v[j]);
                    targetVector.push_back(stoi(s));
                }
            }
        }
        sort(targetVector.begin(), targetVector.end());
        cout << targetVector[2];
    }

    return 0;
}
