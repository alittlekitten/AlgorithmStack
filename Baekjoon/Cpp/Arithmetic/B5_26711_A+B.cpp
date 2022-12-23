#include <iostream>
#include <cstring>

using namespace std;

char* max(char* a, char* b) { // 어떤게 더 큰 수인지 여부를 확인하는 메소드
	if (strlen(a) > strlen(b)) // a가 더 길면 a 반환
		return a;
	else if (strlen(a) < strlen(b)) // b가 더 길면 b 반환
		return b;
	else { // 길이가 같다면?
		for (int i = 0; i < strlen(a); i++) { // 첫자리부터 하나하나 비교해서 살펴봄
			if (a[i] > b[i]) // a가 더 크면 a 반환
				return a;
			else if (a[i] < b[i]) // b가 더 크면 b 반환
				return b;
		}
	}
	return a; // 같으면 a 반환 - 뭘 반환해도 상관이 없음
}

char* min(char* a, char* b) { // 어떤게 더 작은 수인지 여부를 확인하는 메소드
	if (strlen(a) > strlen(b)) // a가 더 길면 b 반환
		return b;
	else if (strlen(a) < strlen(b)) // b가 더 길면 a 반환
		return a;
	else { // 길이가 같다면?
		for (int i = 0; i < strlen(a); i++) { // 첫자리부터 하나하나 비교해서 살펴봄
			if (a[i] > b[i]) // a가 더 크면 b 반환
				return b;
			else if (a[i] < b[i]) // b가 더 크면 a 반환
				return a;
		}
	}
	return b; // 같으면 b 반환 - 뭘 반환해도 상관이 없음
}

void add(char* a, char* b) { // 문자열 내의 숫자를 더하는 경우 (무조건 a가 더 크다고 생각)
	int r[5100] = { 0 }; // 정수형 배열, 배열 내부 0으로 초기화
	int i = strlen(a) - 1; //  a의 길이 -1을 i에 넣어준다.

	for (int j = strlen(b) - 1; j >= 0; j--) { // b의 길이 -1를 j에 넣어준다
		if (i >= 0) {
			r[i] = (a[i] - '0') + (b[j] - '0'); // a와 b에서 각각 0의 아스키코드를 뺀다음 둘을 더해준다. (문자열이니 아스키코드계산)
		}
		i--; // i랑 j 둘다 빼줘야하니 따로 빼준다.
	}

	for (;i >= 0; i--) // 길이 차이때문에 안들어간 부분 넣어주기
		r[i] = a[i] - '0'; // 문자열이니 아스키코드임을 주의하자!

	for (int i = strlen(a) - 1; i > 0; i--) { // 0이 들어가지 않는 이유는 결과값의 0번 인덱스의 값은 2자리여도 상관없기 때문!!
		if (r[i] > 9) { // 만약 9보다 크면
			r[i] -= 10; // 10을 뺀다
			r[i - 1]++; // 앞자리 수를 1 키운다
		}
	}

	for (int i = 0; i < strlen(a); i++) { // 출력! 더했을 때는 0끼리 더하지 않는 이상 r[0]이 0이 될 수 없고, 0끼리 더해도 0이 잘 출력되므로 따로 0의 경우를 고려하지 않아도 된다
		std::cout << r[i];
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26711 A+B
	// 수학
	char a[5100];
	char b[5100];
	std::cin >> a >> b;
	add(max(a, b), min(a, b));

	return 0;
}
