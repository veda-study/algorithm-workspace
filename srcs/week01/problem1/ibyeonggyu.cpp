/**
 * 문제: 프로그래머스 [PCCE 기출문제] 1번 / 문자 출력
 * 링크: https://school.programmers.co.kr/learn/courses/30/lessons/340207
 * 접근법: std::cout을 사용해서 출력 (std::endl은 flush까지 수행하므로 이스케이프 문자인 '\n'으로 출력)
 */

#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int MON = 0, DAY = 0;
	int TOTAL = 366, DDAY = 0;
	int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

	cin >> MON >> DAY;

	for (int i = 0; i < MON; i++)
	{
		DDAY += arr[i];
	}

	cout << TOTAL - (DDAY + DAY);

	return 0;
}
