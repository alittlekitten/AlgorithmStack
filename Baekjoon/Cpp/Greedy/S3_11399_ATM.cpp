#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Greedy (시간이 제일 적게 드는 것부터 찾아야하므로)
    int n, input;
    int sum = 0;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); ++i) {
        for (int j = 0; j <= i; ++j) {
            sum += v[j];
        }
    }

    cout << sum;
    return 0;
}
