/**
 * 문제: 6번
 * 링크: 
 * 접근법: 나머지 연산을 이용하였습니다.
 */

#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int money, m;

    cin >> money;

    m = 1000 - money;
    cout << m/100 << " " << (m%100)/50 << " " << ((m%100)%50)/10;
    return 0;
}