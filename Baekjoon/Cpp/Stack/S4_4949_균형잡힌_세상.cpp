#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    stack<string> s;
    bool chk;
    getline(cin, input);
    while (input != ".") {
        chk = true;
        while (s.size() != 0) s.pop();
        for (int i = 0; i < input.size(); ++i) {
            if (input[i] == '(') s.push("(");
            else if (input[i] == ')' && s.size() != 0 && s.top() == "(") s.pop();
            else if ((input[i] == ')' && s.size() == 0) || (input[i] == ')' && s.size() != 0 && s.top() != "(")) {
                chk = false;
                break;
            }
            else if (input[i] == '[') s.push("[");
            else if (input[i] == ']' && s.size() != 0 && s.top() == "[") s.pop();
            else if ((input[i] == ']' && s.size() == 0) || (input[i] == ']' && s.size() != 0 && s.top() != "[")) {
                chk = false;
                break;
            }
        }
        if (s.size() != 0) chk = false;
        if (chk == false) cout << "no" << '\n';
        else cout << "yes" << '\n';
        getline(cin, input);
    }
    
    return 0;
}
