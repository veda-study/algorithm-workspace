/**
 * 문제: beat
 * 링크: http://59.23.132.199/30stair/beat/beat.php?pname=beat
 * 접근법: 합과 차를 이용해서 큰 수와 작은 수를 찾았습니다.
 */

#include <iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int s, d; // s: 합, d: 차
	int a, b; // a: 큰 수, b: 작은 수

	cin >> s >> d;

	a = (s + d) / 2;
	b = s - a;

	if ((s + d) % 2 == 1) cout << "impossible" << endl;
	else if (a < 0 || b < 0) cout << "impossible" << endl;
	else cout << a << " " << b << endl;

	return 0;
}