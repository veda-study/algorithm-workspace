/**
 * 문제: leap_year
 * 링크: http://59.23.132.199/30stair/leap_year/leap_year.php?pname=leap_year
 * 접근법: if문
 */

#include <iostream>

using namespace std;

void solve(int year);

int main(void)
{
    int year;

    cin >> year;

    solve(year);

    return 0;
}

void solve(int year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
    }
}