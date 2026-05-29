/**
 * 문제: selfdup
 * 링크: http://59.23.132.199/30stair/selfdup/selfdup.php?pname=selfdup
 * 접근법: 그냥 반복문
 */

#include <iostream>

using namespace std;

void solve();

int main(void)
{
    solve();

    return 0;
}

void solve()
{
    int d = 10;

    for (int i = 1; i <= 10000; i++) {
        if ((i * i) % d == i) {
            cout << i << "\n";
        }

        if (i == d) {
            d = d * 10;
        }
    }
}