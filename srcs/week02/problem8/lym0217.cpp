/**
 * 문제: beat
 * 링크: http://59.23.132.199/30stair/beat/beat.php?pname=beat
 * 접근법: 방정식 사용
 */

#include <iostream>

using namespace std;
int main(void)
{
    int a, b;

    cin >> a >> b;
    if((a+b)%2) cout << "impossible\n";
    else{
    	if((a-b)/2 < 0) cout << "impossible\n";
    	else cout << (a+b)/2 << " " << (a-b)/2 << "\n";
    }
    return 0;
}
