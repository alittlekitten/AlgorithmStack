class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<long long> v(n);
        vector<int> idx(primes.size(), 0);
        vector<long long> tmp(primes.size());

        v[0] = 1;
        for (int i = 0; i < primes.size(); ++i) tmp[i] = primes[i];
        for (int i = 1; i < n; ++i) {
            long long minValue = *min_element(tmp.begin(), tmp.end());
            v[i] = minValue;

            for (int j = 0; j < primes.size(); ++j) {
                if (tmp[j] == minValue) {
                    ++idx[j];
                    tmp[j] = v[idx[j]] * primes[j];
                }
            }
        }
        return v[n - 1];
    }
};
