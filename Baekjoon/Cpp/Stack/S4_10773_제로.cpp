#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> s;
    int n, input;
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        if (input == 0) s.pop();
        else s.push(input);
    }

    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }
    cout << sum;

    return 0;
}
