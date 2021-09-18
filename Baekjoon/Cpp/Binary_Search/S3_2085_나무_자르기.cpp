#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, m, input;
    long long take, answer;
    vector<int> v;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    
    long long min = 0;
    long long max = v.back();
    long long mid;
    bool chk = false;
    while (min <= max) {
        take = 0;
        mid = (min + max) / 2;
        for (int i = 0; i < n; ++i) {
            if (v[i] - mid > 0) take += v[i] - mid;
        }
        if (take >= m) {
            min = mid + 1;
            answer = mid;
        }
        else if (take < m) max = mid - 1;
    }
    cout << answer;
    return 0;
}
