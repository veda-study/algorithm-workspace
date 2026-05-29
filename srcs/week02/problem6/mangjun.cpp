/**
 * 문제: change
 * 링크: http://59.23.132.199/30stair/change/change.php?pname=change
 * 접근법: 문자열 변환하여 각 자리 수 추출
 */

#include <iostream>

using namespace std;

void solve(int price);

int main(void)
{
    int price;

    cin >> price;

    solve(price);

    return 0;
}

void solve(int price)
{
    int change = 1000 - price;

    string changeStr = to_string(change);

    cout << changeStr[0] << " ";
    cout << (changeStr[1] - '0') / 5 << " ";
    cout << (changeStr[1] - '0') - (((changeStr[1] - '0') / 5) * 5) << "\n";
}