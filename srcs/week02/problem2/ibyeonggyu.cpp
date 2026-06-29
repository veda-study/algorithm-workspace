/**
 * 문제: mine
 * 링크: http://59.23.132.199/30stair/mine/mine.php?pname=mine
 * 접근법: lym0217의 조언을 받아 지뢰를 계산하는 방식을 구현했습니다.
 * 먼저 모든 케이스마다 주변의 합을 받으면서 범위를 지나지 않는 것들만
 * 합했습니다.
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int countboom(vector <string>& array, int x, int y, int n);

int main(void)
{
    int n;
    cin >> n;                               // n*n 지도 생성

    vector <string> array(n);               // 원본 지도 생성
    vector <string> click(n);               // 클릭한 지도 생성
    vector <string> ans(n, string(n, '.'));  // 정답 지도 -> . 으로 n*n 초기화

    bool flag = false;                      // 지뢰 안 눌렀을 때

    string clicked = "";                    // 클릭한 버튼

    for (int i = 0; i < n; i++) {
        cin >> array[i];                    // 입력받자마자 array에 저장
    }

    for (int j = 0; j < n; j++) {
        cin >> click[j];
    }

    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            if (click[x][y] == 'x') {       // 좌표에서 x를 선택한 부분
                if (array[x][y] == '*') {   // 이 좌표의 폭탄이면 flag 설정해놓기
                    flag = true;
                }
                /* 일단 x인 부분을 전부 숫자로 출력하기 */
                ans[x][y] = '0' + countboom(array, x, y, n);
            }

        }
    }
    if (!flag) {                            // 폭탄을 안 밟았을 때 ans 출력하기
        for (int l = 0; l < n; l++) {
            cout << ans[l] << endl;
        }
    }
    else {                                  // 폭탄을 밟았을 때는 ans에 원본 지도인 array의 폭탄인 부분을 추가
        for (int m = 0; m < n; m++) {
            for (int k = 0; k < n; k++) {
                if (array[m][k] == '*')
                    ans[m][k] = '*';
            }
        }
        for (int l = 0; l < n; l++) {
            cout << ans[l] << endl;
        }

    }
    return 0;
}

/* x, y를 기준으로 - 1~+ 1 까지 범위의 폭탄 계산 + 범위 제한 */
int countboom(vector <string>& array, int x, int y, int n)
{
    int count = 0;

    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {

            int tx = x + dx;
            int ty = y + dy;
            if ((tx >= 0 && tx < n) && (ty >= 0 && ty < n)) {
                if (array[tx][ty] == '*') {
                    count++;
                }
            }
        }
    }
    return count;
}
