/**
 * 문제: 프로그래머스 [PCCE 기출문제] 1번 / 문자 출력
 * 링크: https://school.programmers.co.kr/learn/courses/30/lessons/340207
 * 접근법: std::cout을 사용해서 출력 (std::endl은 flush까지 수행하므로 이스케이프 문자인 '\n'으로 출력)
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int apple = 0, banana = 0, pear = 0;
	int temp = 0;

	cin >> apple >> banana >> pear;
	int cnt1 = apple / 1, cnt2 = banana / 2, cnt3 = pear / 4;

	temp = min(min(cnt1, cnt2), cnt3);
	cout << temp * 7;
	return 0;
}
