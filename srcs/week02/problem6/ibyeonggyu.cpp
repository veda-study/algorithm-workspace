/**
 * 문제: change
 * 링크: http://59.23.132.199/30stair/change/change.php?pname=change
 * 접근법: 배열로 만들어서 각 자리수를 추출해서 케이스를 분리했습니다.
 */

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num = 0;
	cin >> num;
	int a, b, c;  // a: 100원, b: 50원, c: 10원

	string money = to_string(num);
	int hun = money[0] - '0';
	int ten = money[1] - '0';

	if (ten == 0)
	{
		a = 10 - hun;
		b = 0;
		c = 0;
	}
	else if (ten > 5)
	{
		a = 9 - hun;
		b = 0;
		c = 10 - (ten);
	}
	else
	{
		a = 9 - hun;
		b = 1;
		c = 10 - (ten + 5);
	}
	cout << a << " " << b << " " << c << endl;

	return 0;
}