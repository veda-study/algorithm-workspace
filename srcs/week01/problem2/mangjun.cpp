/**
 * 문제: 2번 문제
 * 링크: -
 * 접근법: 약수로 접근
 */

 #include <iostream>
 #include <algorithm>

 using namespace std;

 int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c;

    cin >> a >> b >> c;

    cout << 7 * (min(min(a / 1, b / 2), c / 4)) << "\n";

    return 0;
}