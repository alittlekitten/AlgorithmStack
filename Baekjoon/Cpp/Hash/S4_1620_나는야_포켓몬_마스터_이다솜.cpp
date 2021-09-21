#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    string input;
    map<string, int> mp;
    vector<string> v;

    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        mp.insert(make_pair(input, i + 1));
        v.push_back(input);
    }

    for (int i = 0; i < m; ++i) {
        cin >> input;
        if (isalpha(input[0])) cout << mp[input] << '\n';
        else cout << v[stoi(input) - 1] << '\n';
    }
    
    return 0;
}
