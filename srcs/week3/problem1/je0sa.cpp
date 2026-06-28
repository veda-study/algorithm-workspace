/**
 * 문제: 모의고사
 * 링크: https://school.programmers.co.kr/learn/courses/30/lessons/42840
 * 접근법: 
 */

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<vector<int>> students = {
        {1, 2, 3, 4, 5},
        {2, 1, 2, 3, 2, 4, 2, 5},
        {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}
    };
    
    vector<int> cnt(3, 0); 
    
    int size = answers.size();

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < size; j++) {
            if(answers[j] == students[i][j % students[i].size()]) {
                cnt[i]++;
            }
        }
    }

    int bestStudent = max({cnt[0], cnt[1], cnt[2]});

    for(int i = 0; i < 3; i++) {
        if(bestStudent == cnt[i]) {
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}