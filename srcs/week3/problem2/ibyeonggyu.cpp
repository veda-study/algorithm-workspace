/**
 * 문제: 피보나치 수
 * 링크: https://school.programmers.co.kr/learn/courses/30/lessons/12945
 * 접근법: 초기값 두 항만 vector에 저장을 하고 이후 1234567로 나눈 값을 다음
 * 피보나치 값으로 저장됩니다.
 * 1234567을 늦게 나누면 범위 오류?가 발생하여 값을 저장하기 전에 미리 나눴습니다.
 */

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector <int> F = { 0,1 };

    for (int i = 2; i <= n; i++) {
        F.push_back((F[i - 1] + F[i - 2]) % 1234567);
    }

    return answer = F[n];
}
