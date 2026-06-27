/**
 * 문제: beat
 * 링크: http://59.23.132.199/30stair/beat/beat.php?pname=beat
 * 접근법: 
 * 접근법: 2차방정식을 통해 해결했습니다.
 */

#include <iostream>

using namespace std;

int main(void)
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s,d,a,b;
  
    cin >> s >> d;
    // 2차 방정식 활용  

    a = (s+d)/2;
    b = s - a;

    if((s+d)%2)cout <<"impossible";
    else{
        if((b<0)) cout <<"impossible";
        else{cout << a << " " << b << "\n";}
    }
    return 0;
}