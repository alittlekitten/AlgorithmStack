#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, input;
    map<int, int> num_m;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        num_m[input]++;
    }

    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> input;
        cout << num_m[input] << '\n';
    }

    return 0;
}
