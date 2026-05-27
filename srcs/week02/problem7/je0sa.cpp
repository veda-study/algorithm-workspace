/**
 * 문제: 7번 문제
 * 링크: http://59.23.132.199/30stair/change/change.php?pname=change
 * 접근법: 
 */

#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int year;

    cin >> year;

    if(((year%4) == 0 && (year%100)!= 0) || (year%400 == 0))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}