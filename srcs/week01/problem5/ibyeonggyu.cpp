/**
 * 문제: 프로그래머스 [PCCE 기출문제] 1번 / 문자 출력
 * 링크: https://school.programmers.co.kr/learn/courses/30/lessons/340207
 * 접근법: std::cout을 사용해서 출력 (std::endl은 flush까지 수행하므로 이스케이프 문자인 '\n'으로 출력)
 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 0;
	vector <int> arr, ans;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int j = 0;
		cin >> j;
		arr.push_back(j);
	}
	sort(arr.begin(), arr.end());

	for (int j = 0; j < n; j++)
	{
		if (count(arr.begin(), arr.end(), arr[j]) == 1)
		{
			cout << arr[j] << " ";
		}
	}
	return 0;
}
