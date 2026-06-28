/**
 * 문제: 피보나치 수
 * 링크: https://school.programmers.co.kr/learn/courses/30/lessons/12945
 * 접근법: 직전 두 값을 더해 현재 값을 구하고 
 * 다음 루프 연산을 위해 값들을 한 칸씩 앞으로 밀어줘서 상태를 갱신하여 해결했습니다.
 */

#include <string>

using namespace std;

int solution(int n) {
    int prev1 = 0; // F(n-2)
    int prev2 = 1; // F(n-1)
    int answer = 0; // F(n)
    
    for (int i = 2; i <= n; i++) {
        answer = (prev1 + prev2) % 1234567;
        prev1 = prev2;
        prev2 = answer;
    }
    return answer;
}