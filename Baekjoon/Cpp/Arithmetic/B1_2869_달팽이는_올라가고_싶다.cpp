#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, v;
    cin >> a >> b >> v;
    if ((v - a) % (a - b) == 0) cout << (v - a) / (a - b) + 1;
    else cout << (v - a) / (a - b) + 2;
    
    return 0;
}
