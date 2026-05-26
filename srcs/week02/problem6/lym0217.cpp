/**
 * 문제: change
 * 링크: http://59.23.132.199/30stair/change/change.php?pname=change
 * 접근법: 
 */

#include <iostream>

using namespace std;
int main(void)
{
    int n;
    cin >> n;
    cout<< (1000 - n)/100 << " " << ((1000-n)%100)/50 << " " << (((1000-n)%100)%50)/10 << "\n";

    return 0;
}
