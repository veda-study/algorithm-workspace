/**
 * 문제: beat
 * 링크: http://59.23.132.199/30stair/beat/beat.php?pname=beat
 * 접근법: 연립 방정식
 */

#include <iostream>

using namespace std;

void solve(int s, int d);

int main(void)
{
    int s, d;

    cin >> s >> d;

    solve(s, d);

    return 0;
}

void solve(int s, int d)
{
    int x, y;

    x = (s + d) / 2;
    y = s - x;

    if (x < 0 || y < 0) {
        cout << "impossible" << "\n";
    }
    else {
        if (x + y == s && x - y == d) {
            cout << x << " " << y << "\n";
        }
        else {
            cout << "impossible" << "\n";
        }
    }
}