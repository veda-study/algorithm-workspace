/**
 * 문제: 달리기 경주
 * 링크: https://school.programmers.co.kr/learn/courses/30/lessons/178871
 * 접근법: 이중 for문으로 해보았는데 시간 문제가 있어서
 * map으로 문제를 풀었습니다.
 */

#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    map<string, int> run;   // key: 이름, value: 순위

    for (int i = 0; i < players.size(); i++) {
        run[players[i]] = i;      // 차례대로 0부터 시작
    }

    for (int j = 0; j < callings.size(); j++) {
        int now = run[callings[j]];     // calling 한 선수 등수
        int front = now - 1;            // calling 한 선수 등수 바로 앞

        swap(players[now], players[front]);
        // players 벡터의 front와 now의순서 swap

        run[players[now]] = now;        // 역전한 key에 대한 value 값 수정
        run[players[front]] = front;

    }
    return players;
}