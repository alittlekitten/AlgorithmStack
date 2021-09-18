#include <iostream>
#include <string>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string n;
    bool chk = false;
    cin >> n;
    
    for (int i = 1; i < stoi(n); ++i) {
        string ts = to_string(i);
        int sum = 0;
        for (int j = 0; j < ts.size(); ++j) {
            sum += (int)(ts[j] - '0');
        }
        if (i + sum == stoi(n)) {
            cout << i;
            chk = true;
            break;
        }
    }
    if (chk == false) cout << 0;
    
    return 0;
}
