class Solution {
public:
    string getHint(string secret, string guess) {
        int a = 0;
        int b = 0;
		int s[10] = { 0 };
		int g[10] = { 0 };
		for (int i = 0; i < secret.size(); ++i) {
			if (secret[i] == guess[i]) ++a;
			else {
				++s[secret[i] - '0'];
				++g[guess[i] - '0'];
			}
		}

		for (int i = 0; i < 10; ++i) b += min(s[i], g[i]);

		return to_string(a) + 'A' + to_string(b) + 'B';
    }
};
