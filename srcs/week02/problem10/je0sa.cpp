/**
 * 문제: selfdup
 * 링크: http://59.23.132.199/30stair/selfdup/selfdup.php?pname=selfdup
 * 접근법: 
 */

#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i=1; i<=10000; i++)
    {
        if(i<10){ if((i*i)%10 == i) cout << i << "\n" ; }
        else if(i<100) { if((i*i)%100 == i) cout << i << "\n" ; }
        else if(i<1000) { if((i*i)%1000 == i) cout << i << "\n" ; }
        else { if((i*i)%10000 == i) cout << i << "\n" ; }
    }
    return 0;
}