/**
 * 문제: 1번 문제
 * 링크: -
 * 접근법: 누적합 배열 사용
 */

#include <iostream>

static const int sumDays[13] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

using namespace std;

int main(void)
{
    int x, y;

    cin >> x >> y;

    cout << 366 - (sumDays[x] + y) << "\n";
    
    return 0;
}