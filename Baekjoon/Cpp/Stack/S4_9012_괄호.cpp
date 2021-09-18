#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    stack<char> s;
    int n;
    char c;
    string input;
    bool chk;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        chk = true;
        while (!s.empty()) s.pop(); // 스택 비우기
        cin >> input;
        for (int j = 0; j < input.size(); ++j) {
            c = input[j];
            if (c == ')' && s.size() == 0) {
                chk = false;
                break;
            }
            else if (c == '(') s.push(c);
            else if (c == ')') s.pop();
        }
        if (s.size() != 0) chk = false;

        if (chk == false) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }

    return 0;
}
