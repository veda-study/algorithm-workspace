/**
 * 문제: 프로그래머스 [PCCE 기출문제] 1번 / 문자 출력
 * 링크: https://school.programmers.co.kr/learn/courses/30/lessons/340207
 * 접근법: std::cout을 사용해서 출력 (std::endl은 flush까지 수행하므로 이스케이프 문자인 '\n'으로 출력)
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
		if (temp <= 10)
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