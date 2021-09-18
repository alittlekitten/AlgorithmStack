#include <iostream>
#include <queue>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, target;
    queue<int> q;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        q.push(i);
    }
    cout << "<";
    while (q.size() != 0) {
        for (int i = 0; i < k-1; ++i) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        q.pop();
        if (q.size() != 0) cout << ", ";
    }
    cout << ">";
    

    return 0;
}
