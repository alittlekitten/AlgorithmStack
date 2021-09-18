#include <iostream>
#include <vector>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, input2;
    string input1;
    vector<int> v;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input1;
        // c++ 에서 switch문은 문자열에서 사용 불가! (C#은 가능하다...)
        if (input1 == "push_front") {
            cin >> input2;
            v.insert(v.begin(), input2);
        }
        else if (input1 == "push_back") {
            cin >> input2;
            v.push_back(input2);
        }
        else if (input1 == "pop_front") {
            if (v.size() == 0) cout << -1 << '\n';
            else {
                cout << v.front() << '\n';
                v.erase(v.begin());
            }
        }
        else if (input1 == "pop_back") {
            if (v.size() == 0) cout << -1 << '\n';
            else {
                cout << v.back() << '\n';
                v.pop_back();
            }
        }
        else if (input1 == "size") {
            cout << v.size() << '\n';
        }
        else if (input1 == "empty") {
            if (v.size() == 0) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if (input1 == "front") {
            if (v.size() != 0) cout << v.front() << '\n';
            else cout << -1 << '\n';
        }
        else if (input1 == "back") {
            if (v.size() != 0) cout << v.back() << '\n';
            else cout << -1 << '\n';
        }
    }

    return 0;
}
