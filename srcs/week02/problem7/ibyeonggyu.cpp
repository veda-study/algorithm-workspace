/**
 * 문제: 7번 문제풀이
 * 링크: http://59.23.132.199/30stair/leap_year/leap_year.php?pname=leap_year
 * 접근법: 두개의 조건을 구현하였습니다.
 */

#include <iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int input;
	cin >> input;

	if ((input % 4 == 0 && input % 100 != 0) || (input % 400 == 0))
	{
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;


	return 0;
}