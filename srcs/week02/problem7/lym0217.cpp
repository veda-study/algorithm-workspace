/**
 * 문제: leap_year
 * 링크: http://59.23.132.199/30stair/leap_year/leap_year.php?pname=leap_year
 * 접근법: 조건문 이용
**/

#include <iostream>

using namespace std;
int main(void)
{
    int n;

    cin >> n;
    if((n%400 == 0) || ((n%4 == 0) && (n%100 != 0))) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
