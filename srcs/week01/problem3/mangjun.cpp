/**
 * 문제: 3번 문제
 * 링크: -
 * 접근법: 문자열로 변환하여 자릿수 추출
 */

#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int input;

    cin >> input;

    // 10 미만 그냥 출력
    if (input < 10) {
        cout << input << "\n";
        return 0;
    }

    string num = to_string(input);
    int first = num[0] - '0'; // 문자 -> 숫자

    int len = num.size(); // 자릿수
    
    int i = 1;
    while (i < len) {
        // 같을 때는 다음 자릿수 비교
        if (num[0] == num[i]) {
            i++;
            continue;
        }

        // 다르면 뒷 자릿수가 더 크다면 올림
        if (num[0] < num[i]) {
            first++;
        }

        break;
    }

    for (int i = 0; i < len; i++) {
        cout << first;
    }

    cout << "\n";

    return 0;
}