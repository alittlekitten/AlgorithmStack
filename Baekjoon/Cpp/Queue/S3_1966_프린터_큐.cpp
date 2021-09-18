#include <iostream>
#include <algorithm>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;
    int cases, n, m, input;
    cin >> cases;
    
    for (int i = 0; i < cases; ++i) {
        int cnt = 0;
        v.clear();
        cin >> n >> m;
        for (int i = 0; i < n; ++i) {
            cin >> input;
            v.push_back(input);
        }
        while (1) {
            if (v.front() == *max_element(v.begin(), v.end())) {
                v.erase(v.begin());
                cnt++;
                if (m == 0) break;
                else m--;
            }
            else {
                v.push_back(v.front());
                v.erase(v.begin());
                if (m == 0) m = v.size() - 1;
                else m--;
            }
        }
        cout << cnt << '\n';
    }
    
    return 0;
}
