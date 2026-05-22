/**
 * 문제: 3번 문제풀이
 * 링크: https://school.programmers.co.kr/learn/courses/30/lessons/340207
 * 접근법: pw로 접근해서 맨 앞자리를 추출해서 문제를 풀었습니다.
 */

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int input = 0, temp = 0;
	int repu = 0, other = 0;

	cin >> input;
	for (int i = 0; i < 5; i++)
	{
		temp = input / pow(10, i);
		if (temp < 10)
		{
			for (int j = 0; j <= i; j++)
			{
				repu += temp * pow(10, j);
				other += (temp + 1) * pow(10, j);

			}
			break;
		}
	}
	cout << (repu >= input ? repu : other);

	return 0;
}