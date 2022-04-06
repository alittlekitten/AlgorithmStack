#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 1918 후위 표기식
    // 스택
    // 자기보다 연산자 우선순위가 낮을 때까지 pop해서 ans에 넣는다
    stack<char> s;
    string input = "";
    string ans = "";
    cin >> input;

    for (int i = 0; i < input.size(); ++i) {
        if (input[i] >= 65 && input[i] <= 90) ans += input[i];
        else if (s.empty()) s.push(input[i]); // 아무것도 없는데 연산자가 들어오면 바로 stack에 넣기
        else if (input[i] == 43 || input[i] == 45) { // +, -
            while (!s.empty()) {
                if (s.top() == 40) {
                    s.push(input[i]);
                    break;
                }
                else {
                    ans += s.top();
                    s.pop();
                }
            }
            if (s.empty()) s.push(input[i]);
        }
        else if (input[i] == 42 || input[i] == 47) { // *, /
            while (!s.empty()) {
                if (s.top() == 40 || s.top() == 43 || s.top() == 45) {
                    s.push(input[i]);
                    break;
                }
                else {
                    ans += s.top();
                    s.pop();
                }
            }
            if (s.empty()) s.push(input[i]);
        }
        else if (input[i] == 40) s.push(input[i]); // 여는 괄호
        else { // 닫는 괄호
            while (s.top() != 40) {
                ans += s.top();
                s.pop();
            }
            s.pop();
        }
    }

    while (!s.empty()) {
        ans += s.top();
        s.pop();
    }

    cout << ans;

    return 0;
}
