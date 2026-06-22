/**
 * 문제: 모의고사
 * 링크: https://school.programmers.co.kr/learn/courses/30/lessons/42840
 * 접근법: supo1, 2, 3에 해당하는 규칙의 vector와 count라는 1,2,3 친구들의 정답을
           따로 카운팅하기 위해 count로 3자리를 받게 했습니다.
           max를 이용하여 최대값을 뽑아내고 supo1부터 3까지 max와 값이 같으면
           answer 정답에 추가하여 출력했습니다. */

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> supo1 = { 1,2,3,4,5 };
    vector<int> supo2 = { 2,1,2,3,2,4,2,5 };
    vector<int> supo3 = { 3,3,1,1,2,2,4,4,5,5 };
    vector<int> count = { 0,0,0 };

    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == supo1[i % 5]) {
            count[0]++;
        }
        if (answers[i] == supo2[i % 8]) {
            count[1]++;
        }
        if (answers[i] == supo3[i % 10]) {
            count[2]++;
        }

    }
    int total = max({ count[0], count[1], count[2] });
    for (int i = 0; i < 3; i++) {
        if (total == count[i]) {
            answer.push_back(i + 1);
        }
    }

    return answer;
}