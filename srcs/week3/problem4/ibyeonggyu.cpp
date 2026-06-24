/**
 * 문제: 올바른 괄호
 * 링크: https://school.programmers.co.kr/learn/courses/30/lessons/12909
 * 접근법: 괄호 문제를 stack을 사용해서 풀어보았습니다.
 * 첫번째와 마지막만 고려해서 경우를 나누었습니다.
 */

#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s) {
    bool answer = true;
    stack<int> st;

    for (char c : s) {
        (s[0] != '(' || s[s.size() - 1] != ')') ? answer = false : answer = true;
        /* str의 첫번째가 '('이거나 마지막이 ')'가 아니면 바로 false */

        if (c == '(') st.push(1);
        else if (c == ')') {
            if (st.empty()) return false;
            st.pop();
        }
    }
    if (!st.empty()) return false;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;
    return answer;
}