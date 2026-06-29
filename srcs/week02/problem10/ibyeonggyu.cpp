/**
 * 문제: selfdup
 * 링크: http://59.23.132.199/30stair/selfdup/selfdup.php?pname=selfdup
 * 접근법: 10, 100, 1000, 10000 자릿 수를 기준으로 문제를 구분해서 풀었습니다.
 */

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 1; i <= 10000;i++) {
		int num = i * i;
		string ary = to_string(i);
		int size = pow(10, ary.size());

		if ((num - i) % size == 0) cout << i << endl;
		// 5*5 = 25 에서 -5를 빼면 20인데 이게 끝자리가 0으로 나오면 해당함
		// 25*25 = 625 인데 -25를 하면 600 이고 뒤에 25는 두 자리이므로 
		// 뒤에가 00으로 끝나기에 %100 할 때 나눠지므로 조건에 해당함
	}

	return 0;
}