/**
 * 문제: 4번 문제풀이
 * 링크: https://school.programmers.co.kr/learn/courses/30/lessons/340207
 * 접근법:  문자열에서 A부터 Z까지 각각 찾고 옳게 줄 선
			사람을 세서 전체 n에서 뺏습니다.
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num;								// N 개 입력
	string s;								// 줄서는 문자열
	int cnt = 0;							// 줄을 제대로 선 사람 수 
	char temp = 65;							// 아스키코드 넘버 'A'로 시작

	cin >> num >> s;

	// find에서 temp 값을 찾으면 실행 -> 아니면 실행 X
	while (s.find(temp) != string::npos) {
		if (temp == 90) {					// Z까지 돌았으면 다시 A로 돌아가기
			temp = 65;
		}
		else temp += 1;						// A 찾은 다음 -> B 찾기 -> C 찾기 -> ...

		cnt++;
		s = s.erase(0, s.find(temp));		// 찾았으면 찾은 곳까지 지우기
	}

	cout << num - cnt << endl;				// 입력 N개에서 옳게 선 사람 빼기

	return 0;
}