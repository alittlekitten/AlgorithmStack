// 풀었던 13277번 문제와 동일한 로직이기 때문에 그대로 가져와서 해결
// https://www.acmicpc.net/source/25347383

#include <iostream>
#include <complex>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

const double PI = acos(-1); // PI값을 미리 지정해놓는다
typedef complex<double> cpx; // complex<double> 형태를 cpx라는 이름으로 사용하겠다
// complex<double>는 인자가 없으면 0+0i, 인자가 (a)면 (인자가 1개) a+0i, 인자가 (a,b)면 (인자가 2개) a+bi 형태가 된다.

// n-1차 다항식 f를 n개의 복소수로 DFT함. 이때 x = w
// DFT(이산푸리에변환) : n개의 서로 다른 복소수값이 주어졌을 때 어떤 원칙에 따라 n개의 다른 복소수값으로 변환하는 것
void FFT(vector<cpx>& f, cpx w) {
	int n = f.size();
	if (n == 1) return; // base case : 원소가 하나뿐이면 그때 stop

	// 다항식을 index에 따라서 even과 odd로 분리(각 항은 n/2개로 이루어져있다)
	vector<cpx> even(n / 2), odd(n / 2);
	for (int i = 0; i < n; i++)
		(i % 2 ? odd : even)[i / 2] = f[i];

	// 분할과정 : 자기 자신을 재귀적으로 불러와서 계속해서 분할한다
	FFT(even, w * w);
	FFT(odd, w * w);

	// cpx(complex<double) 선언 - 1+0i
	cpx wp(1);

	// 정복과정 : 분할한 친구들을 f(wp)/f(-wp)를 이용해서 정복한다
	for (int i = 0; i < n / 2; i++) {
		// 앞쪽 : f(x) = f_even(x^2) + x * f_odd(x^2)
		f[i] = even[i] + wp * odd[i];
		// 뒤쪽 : f(-x) = f_even(x^2) - x * f_odd(x^2)
		f[i + n / 2] = even[i] - wp * odd[i];
		wp *= w;
	}
}

// 두 다항식 a, b를 곱한 c를 계산해서 돌려주는 함수. i번째 원소는 x^i의 계수
vector<cpx> multiply(vector<cpx> a, vector<cpx> b) {
	// 다항식의 길이보다 큰 최소의 2의 거듭제곱수를 찾아 n으로 둔다
	int n = 1;
	while (n < a.size() + 1 || n < b.size() + 1)
		n *= 2;
	n *= 2; // n자리가 a와 b중에 더 긴 수의 자릿수라고 생각했을 때(같을 때 포함) n자리 * n자리 곱셈을 했을 때 나올 수 있는 결과값은 2n자리가 최대이기 때문에 한번 더 2를 곱해준다.
	a.resize(n);
	b.resize(n);
	// (0+0i) 형태로 초기화된 complex<double> 형태의 원소들을 n개만큼 가진 벡터인 c(n)을 만든다
	vector<cpx> c(n);

	// n-th root of unity : n제곱을 했을 때 1이 되는 복소수
	// n보다 작은 자연수 k에 대해 k제곱을 하는 것으로는 1이 될 수 없는 n-th root of unity : x_k = (x_1)^k
	cpx w(cos(2 * PI / n), sin(2 * PI / n));

	// 고속푸리에변환을 이용해 DFT한다
	FFT(a, w);
	FFT(b, w);

	// DFT한 값들끼리 곱하면 결과 다항식의 DFT값이 된다.
	for (int i = 0; i < n; i++)
		c[i] = a[i] * b[i];

	// c의 DFT값으로부터 IDFT(Inverse DFT)를 해서 c의 다항식 형태를 복원한다.
	// x_1 대신 -x_1을 넣고 FFT를 한 후에 그 결과값들을 n으로 나누면 된다고 한다.
	FFT(c, cpx(1) / w); // 위에서 FFT 할 때는 2번째 인자로 w를 넣었지만, 이번에는 1/w를 넣는다. int 1을 넣으면 int/cpx 형태가 되서 계산이 안되기 때문에 cpx형태로 넣어준다.
	for (int i = 0; i < n; i++) {
		c[i] /= cpx(n); // n으로 나눈다
		c[i] = cpx(round(c[i].real()), round(c[i].imag())); // 정수값만 받을 것이기 때문에 정수화 시켜준다
	}
	return c;
}


int main() {
	vector<cpx> a, b, n, m, z;

	// 지금처럼 하면 앞에 받는 2개의 값은 의미가 없다
	while (1) {
		char c = getchar();
		if (c == ' ')
			break;
		a.push_back(cpx(c - '0')); // char값(아스키코드값)을 정수값으로 변환
	}
	while (1) {
		char c = getchar();
		if (c == '\n' || c == EOF)
			break;
		b.push_back(cpx(c - '0')); // char값(아스키코드값)을 정수값으로 변환
	}

	// 엔터나 문장이 종료되면 그만 넣는다
	while (1) {
		char c = getchar();
		if (c == '\n' || c == EOF)
			break;
		n.push_back(cpx(c - '0')); // char값(아스키코드값)을 정수값으로 변환
	}
	// 엔터나 문장이 종료되면 그만 넣는다
	while (1) {
		char c = getchar();
		if (c == '\n' || c == EOF)
			break;
		m.push_back(cpx(c - '0')); // char값(아스키코드값)을 정수값으로 변환
	}
	// x와 y의 원소들의 순서를 반대로 바꿔버림
	reverse(n.begin(), n.end());
	reverse(m.begin(), m.end());
	// multiply 함수 실행 (거꾸로 나오게 된다)
	z = multiply(n, m);

	// 구한 z값에 생긴 carry를 정리해주기 위해서 len, carry를 만들어주고 ans에 완료된 결과값을 넣을 예정
	int len = z.size();
	int carry = 0;
	vector<int> ans;

	// 실수부 처리
	for (int i = 0; i < len; i++) {
		int k = (int)round(z[i].real()) + carry;
		// 2자리가 넘어가면 다음 자릿수로 carry값을 보내준다
		carry = k / 10;
		ans.push_back(k % 10);
	}
	// 마지막자리 정리
	while (carry > 0) {
		ans.push_back(carry % 10);
		carry /= 10;
	}

	// 0이 곱해지는 경우를 따로 처리 후 거꾸로 출력
	int i = ans.size() - 1;
	for (; i >= 0; i--) {
		if (ans[i] != 0)
			break;
	}
	if (i < 0)
		cout << "0";
	else {
		for (; i >= 0; i--) {
			cout << ans[i];
		}
	}

	return 0;
}
