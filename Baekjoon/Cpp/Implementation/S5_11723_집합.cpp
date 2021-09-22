#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m, input2;
    string input1;
    vector<int> s;

    cin >> m;
    
    for (int i = 0; i < m; ++i) {
        cin >> input1;
        if (input1 == "add") {
            cin >> input2;
            if (find(s.begin(), s.end(), input2) == s.end()) {
                s.push_back(input2);
                sort(s.begin(), s.end());
            }
        }
        else if (input1 == "remove") {
            cin >> input2;
            if (find(s.begin(), s.end(), input2) != s.end()) {
                s.erase(find(s.begin(), s.end(), input2));
            }
        }
        else if (input1 == "check") {
            cin >> input2;
            if (find(s.begin(), s.end(), input2) != s.end()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if (input1 == "toggle") {
            cin >> input2;
            if (find(s.begin(), s.end(), input2) != s.end()) {
                s.erase(find(s.begin(), s.end(), input2));
            }
            else {
                s.push_back(input2);
                sort(s.begin(), s.end());
            }
        }
        else if (input1 == "all") {
            s.clear();
            for (int j = 1; j < 21; ++j) {
                s.push_back(j);
            }
        }
        else if (input1 == "empty") {
            s.clear();
        }
    }
    
    return 0;
}
