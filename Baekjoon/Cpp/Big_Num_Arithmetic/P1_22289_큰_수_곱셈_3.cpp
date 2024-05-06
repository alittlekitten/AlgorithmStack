#include <iostream>
#include <complex>
#include <vector>
#include <algorithm>

using namespace std;

const double PI = acos(-1);
typedef complex<double> cpx;

void FFT(vector<cpx>& v, bool inv) {
	int len = v.size();

	for (int i = 1, j = 0; i < len; ++i) {
		int bit = len / 2;
		while (j >= bit) {
			j -= bit;
			bit /= 2;
		}
		j += bit;
		if (i < j) swap(v[i], v[j]);
	}

	for (int k = 1; k < len; k *= 2) {
		double angle = (inv ? PI / k : -PI / k);
		cpx dir(cos(angle), sin(angle));
		for (int i = 0; i < len; i += k * 2) {
			cpx unit(1, 0);
			for (int j = 0; j < k; ++j) {
				cpx a = v[i + j];
				cpx b = v[i + j + k] * unit;
				v[i + j] = a + b;
				v[i + j + k] = a - b;
				unit *= dir;
			}
		}
	}

	if (inv) {
		for (int i = 0; i < len; ++i) v[i] /= len;
	}
		
}

vector<cpx> multiply(vector<cpx>& a, vector<cpx>& b) {
	int n = 1;
	while (n <= a.size() || n <= b.size()) n *= 2;
	n *= 2;
	a.resize(n);
	b.resize(n);
	vector<cpx> c(n);

	FFT(a, false);
	FFT(b, false);
	for (int i = 0; i < n; ++i) c[i] = a[i] * b[i];

	FFT(c, true);

	return c;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 22289 큰 수 곱셈 (3)
	// 수학, BigInt, FFT
    // 15576과 동일한 풀이
	vector<cpx> x, y, z;
	// 띄어쓰기 나오면 그만 넣는다
	while (1) {
		char c = getchar();
		if (c == ' ') break;
		x.push_back(cpx(c - '0', 0));
	}
	// 엔터나 문장이 종료되면 그만 넣는다
	while (1) {
		char c = getchar();
		if (c == '\n' || c == EOF) break;
		y.push_back(cpx(c - '0', 0));
	}
	// x와 y의 원소들의 순서를 반대로 바꿔버림
	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end());
	// multiply 함수 실행
	z = multiply(x, y);
	// 구한 z값에 생긴 carry를 정리해줌
	int len = z.size();
	int carry = 0;
	vector<int> ans;
	// 실수부 처리
	for (int i = 0; i < len; ++i) {
		int n = (int)round(z[i].real()) + carry;
		carry = n / 10;
		ans.push_back(n % 10);
	}
	while (carry > 0) {
		ans.push_back(carry % 10);
		carry /= 10;
	}
	// 출력부
	int i = ans.size() - 1;
	for (; i >= 0; --i) {
		if (ans[i] != 0) break;
	}
	if (i < 0) puts("0");
	else {
		for (; i >= 0; --i) {
			cout << ans[i];
		}
	}

	return 0;
}
