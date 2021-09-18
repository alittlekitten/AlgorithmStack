#include <iostream>
#include <set>
using namespace std;

int main(){
    int n, input;
    set<int> s;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        s.insert(input);
    }
    for (auto iter = s.begin(); iter != s.end(); ++iter) {
        cout << *iter << '\n';
    }

    return 0;
}
