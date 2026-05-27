/**
 * 문제: adigit
 * 링크: http://59.23.132.199/30stair/adigit/adigit.php?pname=adigit
 * 접근법: 각 자리수에 맞는 것끼리 구분해서 덧셈을 따로 진행했습니다.
 */

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 0;
	int a = 0, b = 0, c = 0; // a: 1의 자리수의 합, b: 10의 자리합, c: 100의 자리 합

	for (int i = 0; i < 7;i++) {
		cin >> n;
		string num = to_string(n);

		if (num.size() == 1) a += n;
		else if (num.size() == 2) b += n;
		else c += n;
	}

	cout << a << " " << b << " " << c << endl;

	return 0;
}