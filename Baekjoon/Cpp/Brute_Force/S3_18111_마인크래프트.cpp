#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, b, input;
    int max = 0;
    int min = 256;
    int sum = 0;
    vector<int> v;
    cin >> n >> m >> b;
    for (int i = 0; i < n * m; ++i) {
        cin >> input;
        sum += input;
        if (max < input) max = input;
        if (min > input) min = input;
        v.push_back(input);
    }

    int minchangenum = 640000000; // 256*250000*10
    int changenum, height, inven;
    for (int i = min; i <= max; ++i) {
        changenum = 0;
        inven = b;
        for (int j = 0; j < v.size(); ++j) {
            if (v[j] - i > 0) {
                changenum += 2 * (v[j] - i);
                inven += v[j] - i;
            }
            else {
                changenum += abs(v[j] - i);
                inven -= abs(v[j] - i);
            }
        }
        if (minchangenum >= changenum && inven >= 0) {
            minchangenum = changenum;
            height = i;
        }
    }

    cout << minchangenum << " " << height;

    return 0;
}
