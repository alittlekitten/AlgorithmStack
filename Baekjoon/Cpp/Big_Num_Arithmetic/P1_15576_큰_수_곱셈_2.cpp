#include <iostream>
#include <complex>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

const double PI = acos(-1);
typedef complex<double> cpx;

void FFT(vector<cpx>& f, cpx w) {
	int n = f.size();
	if (n == 1) return;
	vector<cpx> even(n / 2), odd(n / 2);
	for (int i = 0; i < n; ++i)
		(i % 2 ? odd : even)[i / 2] = f[i];
	FFT(even, w * w);
	FFT(odd, w * w);

	cpx wp(1, 0);
	for (int i = 0; i < n / 2; ++i) {
		f[i] = even[i] + wp * odd[i];
		f[i + n / 2] = even[i] - wp * odd[i];
		wp *= w;
	}
}

vector<cpx> multiply(vector<cpx> a, vector<cpx> b) {
	int n = 1;
	while (n <= a.size() || n <= b.size()) n *= 2;
	n *= 2;
	a.resize(n);
	b.resize(n);
	vector<cpx> c(n);

	cpx w(cos(2 * PI / n), sin(2 * PI / n));
	FFT(a, w);
	FFT(b, w);
	for (int i = 0; i < n; ++i)
		c[i] = a[i] * b[i];
	FFT(c, cpx(1, 0) / w);
	for (int i = 0; i < n; ++i) {
		c[i] /= cpx(n, 0);
		c[i] = cpx(round(c[i].real()), round(c[i].imag()));
	}
	return c;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15576 큰 수 곱셈 (2)
	// 수학, BigInt
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
